#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lexical/scanner.h"
#include "syntax/parser.h"
#include "syntax/ast.h"

extern int lexeme_counter;
extern int line_counter;
extern int DEBUG;
extern struct ast_node *ast;

int main(int argc, char **argv) {
  if (argc < 2) {
    exit(1);
  }

  yyin = fopen(argv[1], "r");

  // do {
    yyparse();
  // } while (!feof(yyin));

  fclose(yyin);
  yylex_destroy();

  if (DEBUG) {
    printf("Total de tokens: %d\n", lexeme_counter);
    printf("Total de linhas: %d\n", line_counter);
  }

  print_ast(ast);
  free_ast(ast);

  return 0;
}
