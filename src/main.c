#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lexical/scanner.h"
#include "syntax/parser.h"
#include "entities/ast.h"
#include "entities/symbol_table.h"
#include "main.h"

extern struct ast_node *ast;
struct symbol_table_row *initial_symbol_table = NULL;
struct scope *initial_scope = NULL;
extern struct scope *current_scope;

int print_tokens_enabled;
int print_ast_enabled;
int print_st_enabled;
int line_counter;
int column_counter;
int parser_column;
int semantic_errors;

void global_setup() {
  print_tokens_enabled = 0;
  print_ast_enabled = 1;
  print_st_enabled = 1;

  line_counter = 1;
  column_counter = 1;

  parser_column = 1;

  semantic_errors = 0;
}

void free_data_structures() {
  yylex_destroy();
  free_ast(ast);
  free_symbol_table(initial_symbol_table);
}

void print_informations() {
  if (print_ast_enabled) {
    printf("\n======================== Abstract Symbol Tree ========================\n");
    print_ast(ast);
    printf("======================================================================\n\n");
  }

  if (print_st_enabled) {
    print_symbol_table(initial_symbol_table);
  }
}

int main(int argc, char **argv) {
  if (argc < 2) {
    exit(1);
  }

  global_setup();
  yyin = fopen(argv[1], "r");

  struct scope *scope = (struct scope *) malloc(sizeof(struct scope));
  initial_symbol_table = (struct symbol_table_row *) malloc(sizeof(struct symbol_table_row));

  scope->parent = NULL;
  scope->symbol_table = initial_symbol_table;
  LL_APPEND(initial_scope, scope);
  current_scope = initial_scope;

  printf("current_scope: %p\n", scope);
  printf("current_scope->parent: %p\n", scope->parent);

  do {
    yyparse();
  } while (!feof(yyin));

  print_informations();

  fclose(yyin);
  // free_data_structures();

  return 0;
}
