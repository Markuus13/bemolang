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

  const int PRINT_TOKENS_ENABLED = 1;

  enum TOKENS {
    SET_ADD_TKN,
    ELEM_TKN,
    ELSE_TKN,
    EXISTS_TKN,
    FOR_TKN,
    FORALL_TKN,
    IF_TKN,
    IN_TKN,
    INT_TKN,
    IS_SET_TKN,
    READ_TKN,
    REMOVE_TKN,
    RETURN_TKN,
    SET_TKN,
    WRITE_TKN,
    WRITELN_TKN,
    EMPTY_CONST_TKN,
    AND_OP_TKN,
    OR_OP_TKN,
    LT_OR_EQ_OP_TKN,
    BG_OR_EQ_OP_TKN,
    EQUAL_OP_TKN,
    NOT_EQUAL_OP_TKN,
    SEMICOLON_TKN,
    LEFT_BRACKET_TKN,
    RIGHT_BRACKET_TKN,
    ASSIGNMENT_OP_TKN,
    LEFT_PARENTESIS_TKN,
    RIGHT_PARENTESIS_TKN,
    ADD_OP_TKN,
    SUBTRACTION_OP_TKN,
    MULTIPLICATION_OP_TKN,
    DIVISION_OP_TKN,
    NOT_OP_TKN,
    LT_OP_TKN,
    BG_OP_TKN,
    COMMA_TKN,
    WHITESPACE_TKN,
    BREAK_LINE_TKN,
    IDENTIFIER_TKN,
    INTEGER_TKN,
    FLOAT_TKN,
    STRING_TKN,
    CHARACTER_TKN
  };


  int lexeme_counter = 0;
  int line_counter = 1;
  int column_counter = 0;

  void handle_token(int token);
  void handle_unrecognized_symbol();
  void count();
  void print_token(int token);
%}

DIGIT      [0-9]
LETTER     [a-zA-Z_]

%%

"add"                           { handle_token(SET_ADD_TKN); return ADD; }
"elem"                          { handle_token(ELEM_TKN); return ELEM; }
"else"                          { handle_token(ELSE_TKN); return ELSE; }
"exists"                        { handle_token(EXISTS_TKN); return EXISTS; }
"float"                         { handle_token(FLOAT_TKN); return FLOAT; }
"for"                           { handle_token(FOR_TKN); return FOR; }
"forall"                        { handle_token(FORALL_TKN); return FORALL; }
"if"                            { handle_token(IF_TKN); return IF; }
"in"                            { handle_token(IN_TKN); return IN; }
"int"                           { handle_token(INT_TKN); return INT; }
"is_set"                        { handle_token(IS_SET_TKN); return IS_SET; }
"read"                          { handle_token(READ_TKN); return READ; }
"remove"                        { handle_token(REMOVE_TKN); return REMOVE; }
"return"                        { handle_token(RETURN_TKN); return RETURN; }
"set"                           { handle_token(SET_TKN); return SET; }
"write"                         { handle_token(WRITE_TKN); return WRITE; }
"writeln"                       { handle_token(WRITELN_TKN); return WRITELN; }

"EMPTY"                         { handle_token(EMPTY_CONST_TKN); return EMPTY_CONST; }
{LETTER}({LETTER}|{DIGIT})*     { handle_token(IDENTIFIER_TKN); yylval.token = (char *) strdup(yytext); return IDENTIFIER; }
[+-]?{DIGIT}+                   { handle_token(INTEGER_TKN); yylval.token = (char *) strdup(yytext); return INTEGER_CONST; }
[+-]?{DIGIT}+"."{DIGIT}+        { handle_token(FLOAT_TKN); yylval.token = (char *) strdup(yytext); return FLOAT_CONST; }
\"(\\.|[^\\"])*\"               { handle_token(STRING_TKN); yylval.token = (char *) strdup(yytext); return STRING; }
\'(\\.|[^\\'])\'                { handle_token(CHARACTER_TKN); yylval.token = (char *) strdup(yytext); return CHARACTER_CONST; }

"&&"                            { handle_token(AND_OP_TKN); return AND; }
"||"                            { handle_token(OR_OP_TKN); return OR; }
"<="                            { handle_token(LT_OR_EQ_OP_TKN); return LT_OR_EQ_TO; }
">="                            { handle_token(BG_OR_EQ_OP_TKN); return BG_OR_EQ_TO; }
"=="                            { handle_token(EQUAL_OP_TKN); return EQUAL_TO; }
"!="                            { handle_token(NOT_EQUAL_OP_TKN); return NOT_EQUAL_TO; }
";"                             { handle_token(SEMICOLON_TKN); return yytext[0]; }
"{"                             { handle_token(LEFT_BRACKET_TKN); return yytext[0]; }
"}"                             { handle_token(RIGHT_BRACKET_TKN); return yytext[0]; }
"="                             { handle_token(ASSIGNMENT_OP_TKN); return yytext[0]; }
"("                             { handle_token(LEFT_PARENTESIS_TKN); return yytext[0]; }
")"                             { handle_token(RIGHT_PARENTESIS_TKN); return yytext[0]; }
"-"                             { handle_token(ADD_OP_TKN); return yytext[0]; }
"+"                             { handle_token(SUBTRACTION_OP_TKN); return yytext[0]; }
"*"                             { handle_token(MULTIPLICATION_OP_TKN); return yytext[0]; }
"/"                             { handle_token(DIVISION_OP_TKN); return yytext[0]; }
"!"                             { handle_token(NOT_OP_TKN); return yytext[0]; }
"<"                             { handle_token(LT_OP_TKN); return yytext[0]; }
">"                             { handle_token(BG_OP_TKN); return yytext[0]; }
","                             { handle_token(COMMA_TKN); return yytext[0]; }

[ \t\v\f]                       { handle_token(WHITESPACE_TKN); /* ignore */ }
\n                              { handle_token(BREAK_LINE_TKN); /* ignore */ }

.                               { handle_unrecognized_symbol(); }

%%

void handle_token(int token) {
  count();
  print_token(token);
}

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

void print_token(int token) {
  if (PRINT_TOKENS_ENABLED) {
    switch(token) {
      case SET_ADD_TKN:
        printf("<add>");
        break;
      case ELEM_TKN:
        printf("<elem>");
        break;
      case ELSE_TKN:
        printf("<else>");
        break;
      case EXISTS_TKN:
        printf("<exists>");
        break;
      case FOR_TKN:
        printf("<for>");
        break;
      case FORALL_TKN:
        printf("<forall>");
        break;
      case IF_TKN:
        printf("<if>");
        break;
      case IN_TKN:
        printf("<in>");
        break;
      case IS_SET_TKN:
        printf("is_set");
        break;
      case READ_TKN:
        printf("<read>");
        break;
      case REMOVE_TKN:
        printf("<remove>");
        break;
      case RETURN_TKN:
        printf("<return>");
        break;
      case SET_TKN:
        printf("<set>");
        break;
      case WRITE_TKN:
        printf("<write>");
        break;
      case WRITELN_TKN:
        printf("<writeln>");
        break;
      case AND_OP_TKN:
        printf("<and_op, '%s'>", yytext);
        break;
      case OR_OP_TKN:
        printf("<or_op, '%s'>", yytext);
        break;
      case LT_OR_EQ_OP_TKN:
        printf("<lt_or_eq_op, '%s'>", yytext);
        break;
      case BG_OR_EQ_OP_TKN:
        printf("<bg_or_eq_op, '%s'>", yytext);
        break;
      case EQUAL_OP_TKN:
        printf("<eq_op, '%s'>", yytext);
        break;
      case NOT_EQUAL_OP_TKN:
        printf("<not_eq_op, '%s'>", yytext);
        break;
      case SEMICOLON_TKN:
        printf("<semicolon, '%s'>", yytext);
        break;
      case LEFT_BRACKET_TKN:
        printf("<left_brack, '%s'>", yytext);
        break;
      case RIGHT_BRACKET_TKN:
        printf("<right_brack, '%s'>", yytext);
        break;
      case ASSIGNMENT_OP_TKN:
        printf("<assign_op, '%s'>", yytext);
        break;
      case LEFT_PARENTESIS_TKN:
        printf("<left_parent, '%s'>", yytext);
        break;
      case RIGHT_PARENTESIS_TKN:
        printf("<right_parent, '%s'>", yytext);
        break;
      case ADD_OP_TKN:
        printf("<add_op, '%s'>", yytext);
        break;
      case SUBTRACTION_OP_TKN:
        printf("<sub_op, '%s'>", yytext);
        break;
      case MULTIPLICATION_OP_TKN:
        printf("<mult_op, '%s'>", yytext);
        break;
      case DIVISION_OP_TKN:
        printf("<div_op, '%s'>", yytext);
        break;
      case NOT_OP_TKN:
        printf("<not_op, '%s'>", yytext);
        break;
      case LT_OP_TKN:
        printf("<lt_op, '%s'>", yytext);
        break;
      case BG_OP_TKN:
        printf("<bg_op, '%s'>", yytext);
        break;
      case COMMA_TKN:
        printf("<comma, '%s>'", yytext);
        break;
      case WHITESPACE_TKN:
        printf("%s", yytext);
        break;
      case BREAK_LINE_TKN:
        printf("%s", yytext);
        break;
      case EMPTY_CONST_TKN:
        printf("<EMPTY>");
        break;
      case IDENTIFIER_TKN:
        printf("<id, '%s'>", yytext);
        break;
      case INTEGER_TKN:
        printf("<int, %s>", yytext);
        break;
      case FLOAT_TKN:
        printf("<float, %s>", yytext);
        break;
      case STRING_TKN:
        printf("<string, %s>", yytext);
        break;
      case CHARACTER_TKN:
        printf("<char, %s>", yytext);
        break;
      default:
        break;
    }
  }
}

void handle_unrecognized_symbol() {
  printf("Unrecognized symbol \"%s\" at %d:%d.\n", yytext, line_counter, column_counter);
}
