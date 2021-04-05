%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "ast.h"
%}

%output "./src/syntax/parser.c"
%defines "./src/syntax/parser.h"

%define lr.type canonical-lr
%define parse.error verbose

%union {
  struct ast *ast;
  float float_value;
}

%token <float_value> NUMBER

%type <ast> translation_unit external_declaration
%type <float_value> multiplicative_expression additive_expression unary_expression

%%
translation_unit: external_declaration
               | translation_unit external_declaration
               ;

external_declaration: additive_expression { printf("%f", $1); }
                    ;

additive_expression: multiplicative_expression
                   | additive_expression '+' multiplicative_expression { $$ = $1 + $3; }
                   | additive_expression '-' multiplicative_expression { $$ = $1 - $3; }
                   ;

multiplicative_expression: unary_expression
                         | multiplicative_expression '*' unary_expression { $$ = $1 * $3; }
                         | multiplicative_expression '/' unary_expression { $$ = $1 / $3; }
                         ;

unary_expression: NUMBER ;

%%

void yyerror (char const *s) {
  fprintf (stderr, "%s\n", s);
}



