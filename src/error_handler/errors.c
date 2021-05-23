#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "errors.h"

extern int line_counter;
extern int parser_column;
extern int source_code_has_error;

void yyerror (char const *string) {
  source_code_has_error = 1;
  fprintf(stderr, "%d:%d %s\n", line_counter, parser_column, string);
}

void report_lexer_error(const char *symbol) {
  char error_message[1000];
  strcpy(error_message, "Unrecognized symbol \"");
  strcat(error_message, symbol);
  strcat(error_message, "\".");
  yyerror(error_message);
}

void report_main_function_not_defined() {
  yyerror("Error: Undefined reference to 'main' function");
}

void report_identifier_not_declared(const char* identifier) {
  char error_message[1000];
  strcpy(error_message, "Error: Undeclared identifier \"");
  strcat(error_message, identifier);
  strcat(error_message, "\".");
  yyerror(error_message);
}
