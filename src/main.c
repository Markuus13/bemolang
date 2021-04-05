#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "lexical/scanner.h"
#include "syntax/parser.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    exit(1);
  }

  yyin = fopen(argv[1], "r");

  do {
    yyparse();
  } while (!feof(yyin));

  fclose(yyin);
  yylex_destroy();

  // if (DEBUG) {
  //   printf("Total de tokens: %d\n", lexeme_counter);
  //   printf("Total de linhas: %d\n", line_counter);
  // }

  return 0;
}
