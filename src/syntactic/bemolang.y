%{
  #include <stdio.h>
  #include <stdlib.h>

  int yylex(void);
  extern void yyerror(const char*);
  extern int yylex_destroy(void);
  extern FILE* yyin;
%}

%output "./src/syntactic/bemolang.c"
%defines "./src/syntactic/bemolang.h"

%define lr.type canonical-lr
%define parse.error verbose

%union {
 float d;
}

%token <d> NUMBER

%type <d> multiplicative_expression additive_expression unary_expression

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



