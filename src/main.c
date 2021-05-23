#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lexical/scanner.h"
#include "syntax/parser.h"
#include "entities/ast.h"
#include "entities/symbol_table.h"
#include "main.h"

ast_node *ast = NULL;
symbol_table_row *initial_symbol_table = NULL;
scope *initial_scope = NULL;
scope *current_scope;

int print_tokens_enabled;
int print_ast_enabled;
int print_st_enabled;

int line_counter;
int column_counter;
int parser_column;

int source_code_has_error;

void global_setup() {
  print_tokens_enabled = 0;
  print_ast_enabled = 1;
  print_st_enabled = 1;

  line_counter = 1;
  column_counter = 1;

  parser_column = 1;

  source_code_has_error = 0;
}

void free_data_structures() {
  yylex_destroy();
  // free_ast(ast);
  free_symbol_table(initial_scope);
}

void print_informations() {
  if (print_ast_enabled) {
    printf("\n======================== Abstract Symbol Tree ========================\n");
    print_ast(ast);
    printf("======================================================================\n\n");
  }

  if (print_st_enabled) {
    print_symbol_table(initial_scope);
  }
}

int main(int argc, char **argv) {
  if (argc < 2) {
    exit(1);
  }

  global_setup();
  yyin = fopen(argv[1], "r");

  initial_scope = (struct scope *) malloc(sizeof(struct scope));
  initial_scope->parent = NULL;
  initial_scope->symbol_table = initial_symbol_table;
  current_scope = initial_scope;

  do {
    yyparse();
  } while (!feof(yyin));

  if (!source_code_has_error) {
    print_informations();
  }

  fclose(yyin);
  free_data_structures();

  return 0;
}
