/* Bemolang Grammar, Lex specification */
/* Based on https://www.lysator.liu.se/c/ANSI-C-grammar-l.html */

%option noyywrap

%{
  #include <stdio.h>
  #include <string.h>

  int debug = 0;

  int lexeme_counter = 0;
  int line_counter = 1;
  int column_counter = 0;

  void count();
  void print_symbol();
  void handle_unrecognized_symbol();
%}

DIGIT      [0-9]
LETTER     [a-zA-Z_]

%%

"add"                           { count(); print_symbol(); }
"elem"                          { count(); print_symbol(); }
"else"                          { count(); print_symbol(); }
"exists"                        { count(); print_symbol(); }
"float"                         { count(); print_symbol(); }
"for"                           { count(); print_symbol(); }
"forall"                        { count(); print_symbol(); }
"if"                            { count(); print_symbol(); }
"in"                            { count(); print_symbol(); }
"int"                           { count(); print_symbol(); }
"is_set"                        { count(); print_symbol(); }
"read"                          { count(); print_symbol(); }
"remove"                        { count(); print_symbol(); }
"return"                        { count(); print_symbol(); }
"set"                           { count(); print_symbol(); }
"write"                         { count(); print_symbol(); }
"writeIn"                       { count(); print_symbol(); }

"EMPTY"                         { count(); print_symbol(); }
{LETTER}({LETTER}|{DIGIT})*     { count(); print_symbol(); }
[+-]?{DIGIT}+                   { count(); print_symbol(); }
[+-]?{DIGIT}+"."{DIGIT}+        { count(); print_symbol(); }
\"(\\.|[^\\"])*\"               { count(); print_symbol(); }
\'(\\.|[^\\'])\'                { count(); print_symbol(); }

"&&"                            { count(); print_symbol(); }
"||"                            { count(); print_symbol(); }
"<="                            { count(); print_symbol(); }
">="                            { count(); print_symbol(); }
"=="                            { count(); print_symbol(); }
"!="                            { count(); print_symbol(); }
";"                             { count(); print_symbol(); }
"{"                             { count(); print_symbol(); }
"}"                             { count(); print_symbol(); }
"="                             { count(); print_symbol(); }
"("                             { count(); print_symbol(); }
")"                             { count(); print_symbol(); }
"-"                             { count(); print_symbol(); }
"+"                             { count(); print_symbol(); }
"*"                             { count(); print_symbol(); }
"/"                             { count(); print_symbol(); }
"!"                             { count(); print_symbol(); }
"<"                             { count(); print_symbol(); }
">"                             { count(); print_symbol(); }

[ \t\v\f]                       { count(); print_symbol(); }
\n                              { count(); print_symbol();  }

.                               { handle_unrecognized_symbol(); }

%%

int is_a_line_break(char* string) {
  return !strcmp(string, "\n");
}

void count_line() {
  if (is_a_line_break(yytext)) {
    column_counter = 0;
    line_counter ++;
  }
}

void count_column() {
  int number_of_symbols = strlen(yytext);
  column_counter += number_of_symbols;
}

void count() {
  lexeme_counter ++;

  count_column();
  count_line();
}

void print_symbol() {
  if (debug) { printf("Valid symbol: %s\n", yytext); }
}

void handle_unrecognized_symbol() {
  printf("Unrecognized symbol \"%s\" at %d:%d.\n", yytext, line_counter, column_counter);
}

int main(int argc, char **argv) {
  /* skip over program name */
  ++argv, --argc;

  if (argc > 0) {
    yyin = fopen(argv[0], "r");
  } else {
    yyin = stdin;
  }
  yylex();

  if (debug) {
    printf("Total de tokens: %d\n", lexeme_counter);
    printf("Total de linhas: %d\n", line_counter);
  }

  return 0;
}
