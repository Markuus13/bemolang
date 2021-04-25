#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lexical/scanner.h"
#include "syntax/parser.h"
#include "syntax/ast.h"
#include "main.h"

extern struct ast_node *ast;

void global_setup() {
  print_tokens_enabled = 0;
  line_counter = 1;
  column_counter = 1;
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

  fclose(yyin);
  yylex_destroy();
  // print_ast(ast);
  // free_ast(ast);

  return 0;
}
