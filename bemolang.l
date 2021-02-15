/* Bemolang Grammar, Lex specification */
/* Based on https://www.lysator.liu.se/c/ANSI-C-grammar-l.html */

%option noyywrap

%{
	#include <stdio.h>

	int counter = 0;
	int debug = 1;

	void count() {
		counter ++;
	}

	void print_lexeme(char *yytext) {
		if (debug) { printf("%s\n", yytext); }
	}
%}

DIGIT 					[0-9]
LETTER					[a-zA-Z_]

%%

"add"													{ count(); print_lexeme(yytext); }
"elem"												{ count(); print_lexeme(yytext); }
"else"												{ count(); print_lexeme(yytext); }
"exists"											{ count(); print_lexeme(yytext); }
"for"													{ count(); print_lexeme(yytext); }
"float"												{ count(); print_lexeme(yytext); }
"forall"											{ count(); print_lexeme(yytext); }
"if"					  							{ count(); print_lexeme(yytext); }
"is_set"											{ count(); print_lexeme(yytext); }
"in"					  							{ count(); print_lexeme(yytext); }
"int"					  							{ count(); print_lexeme(yytext); }
"remove"											{ count(); print_lexeme(yytext); }
"return"											{ count(); print_lexeme(yytext); }
"set"					  							{ count(); print_lexeme(yytext); }

"EMPTY"												{ count(); print_lexeme(yytext); }
{LETTER}({LETTER}|{DIGIT})*		{ count(); print_lexeme(yytext); }
[+-]?{DIGIT}+									{ count(); print_lexeme(yytext); }
[+-]?{DIGIT}+"."{DIGIT}+			{ count(); print_lexeme(yytext); }
\"(\\.|[^\\"])*\"							{ count(); print_lexeme(yytext); }
\'(\\.|[^\\'])\'							{ count(); print_lexeme(yytext); }

"&&"													{ count(); print_lexeme(yytext); }
"||"													{ count(); print_lexeme(yytext); }
"<="													{ count(); print_lexeme(yytext); }
">="													{ count(); print_lexeme(yytext); }
"=="													{ count(); print_lexeme(yytext); }
"!="													{ count(); print_lexeme(yytext); }
";"														{ count(); print_lexeme(yytext); }
"{"														{ count(); print_lexeme(yytext); }
"}"														{ count(); print_lexeme(yytext); }
"="														{ count(); print_lexeme(yytext); }
"("														{ count(); print_lexeme(yytext); }
")"														{ count(); print_lexeme(yytext); }
"-"														{ count(); print_lexeme(yytext); }
"+"														{ count(); print_lexeme(yytext); }
"*"														{ count(); print_lexeme(yytext); }
"/"														{ count(); print_lexeme(yytext); }
"!"														{ count(); print_lexeme(yytext); }
"<"														{ count(); print_lexeme(yytext); }
">"														{ count(); print_lexeme(yytext); }

[ \t\v\n\f]										{ count(); print_lexeme(yytext); }
.															{ printf("Invalid token"); }

%%

int main(int argc, char **argv) {
	/* skip over program name */
	++argv, --argc;

	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}
	yylex();

	printf("Total de tokens: %d\n", counter);
}
