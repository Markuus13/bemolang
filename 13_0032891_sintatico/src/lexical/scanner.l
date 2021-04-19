/* Bemolang Grammar, Lex specification */
/* Based on https://www.lysator.liu.se/c/ANSI-C-grammar-l.html */

%option noinput nounput
%option noyywrap
%option outfile="./src/lexical/scanner.c" header-file="./src/lexical/scanner.h"

%{
  #include <stdio.h>
  #include <string.h>
  #include <math.h>
  #include "../syntax/parser.h"

  const int DEBUG = 0;

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

"add"                           { count(); print_symbol(); return ADD; }
"elem"                          { count(); print_symbol(); return ELEM; }
"else"                          { count(); print_symbol(); return ELSE; }
"exists"                        { count(); print_symbol(); return EXISTS; }
"float"                         { count(); print_symbol(); return FLOAT; }
"for"                           { count(); print_symbol(); return FOR; }
"forall"                        { count(); print_symbol(); return FORALL; }
"if"                            { count(); print_symbol(); return IF; }
"in"                            { count(); print_symbol(); return IN; }
"int"                           { count(); print_symbol(); return INT; }
"is_set"                        { count(); print_symbol(); return IS_SET; }
"read"                          { count(); print_symbol(); return READ; }
"remove"                        { count(); print_symbol(); return REMOVE; }
"return"                        { count(); print_symbol(); return RETURN; }
"set"                           { count(); print_symbol(); return SET; }
"write"                         { count(); print_symbol(); return WRITE; }
"writeln"                       { count(); print_symbol(); return WRITELN; }

"EMPTY"                         { count(); print_symbol(); return EMPTY_CONST; }
{LETTER}({LETTER}|{DIGIT})*     { count(); print_symbol(); yylval.token = (char *) strdup(yytext); return IDENTIFIER; }
[+-]?{DIGIT}+                   { count(); print_symbol(); yylval.token = (char *) strdup(yytext); return INTEGER_CONST; }
[+-]?{DIGIT}+"."{DIGIT}+        { count(); print_symbol(); yylval.token = (char *) strdup(yytext); return FLOAT_CONST; }
\"(\\.|[^\\"])*\"               { count(); print_symbol(); yylval.token = (char *) strdup(yytext); return STRING; }
\'(\\.|[^\\'])\'                { count(); print_symbol(); yylval.token = (char *) strdup(yytext); return CHARACTER_CONST; }

"&&"                            { count(); print_symbol(); return AND; }
"||"                            { count(); print_symbol(); return OR; }
"<="                            { count(); print_symbol(); return LT_OR_EQ_TO; }
">="                            { count(); print_symbol(); return BG_OR_EQ_TO; }
"=="                            { count(); print_symbol(); return EQUAL_TO; }
"!="                            { count(); print_symbol(); return NOT_EQUAL_TO; }
";"                             { count(); print_symbol(); return yytext[0]; }
"{"                             { count(); print_symbol(); return yytext[0]; }
"}"                             { count(); print_symbol(); return yytext[0]; }
"="                             { count(); print_symbol(); return yytext[0]; }
"("                             { count(); print_symbol(); return yytext[0]; }
")"                             { count(); print_symbol(); return yytext[0]; }
"-"                             { count(); print_symbol(); return yytext[0]; }
"+"                             { count(); print_symbol(); return yytext[0]; }
"*"                             { count(); print_symbol(); return yytext[0]; }
"/"                             { count(); print_symbol(); return yytext[0]; }
"!"                             { count(); print_symbol(); return yytext[0]; }
"<"                             { count(); print_symbol(); return yytext[0]; }
">"                             { count(); print_symbol(); return yytext[0]; }
","                             { count(); print_symbol(); return yytext[0]; }

[ \t\v\f]                       { count(); print_symbol(); /* ignore */ }
\n                              { count(); print_symbol(); /* ignore */ }

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
  if (DEBUG) { printf("Valid symbol: %s\n", yytext); }
}

void handle_unrecognized_symbol() {
  printf("Unrecognized symbol \"%s\" at %d:%d.\n", yytext, line_counter, column_counter);
}
