#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lexical/scanner.h"
#include "syntax/parser.h"
#include "entities/ast.h"
#include "main.h"

extern struct ast_node *ast;
int print_tokens_enabled;
int print_ast_enabled;
int print_st_enabled;
int line_counter;
int column_counter;
int parser_column;

void global_setup() {
  print_tokens_enabled = 1;
  print_ast_enabled = 1;
  // Not ready yet
  // print_st_enabled = 1;

  line_counter = 1;
  column_counter = 1;

  parser_column = 1;
}

int main(int argc, char **argv) {
  if (argc < 2) {
    exit(1);
  }
  global_setup();

  yyin = fopen(argv[1], "r");

  do {
    yyparse();
  } while (!feof(yyin));

  if (print_ast_enabled) {
    printf("====== Abstract Symbol Tree ======\n\n");
    print_ast(ast);
    printf("\n===============\n\n");
  }

  // if (print_st_enabled) {
  //   printf("======  ======\n\n");
  //   print_symbol_table(symbol_table);
  //   printf("\n===============\n\n");
  // }

  fclose(yyin);
  yylex_destroy();
  free_ast(ast);
  // free_symbol_table(symbol_table);

  return 0;
}
