#ifndef errors_h
#define errors_h

/* Interface to the lexer */
extern int yylex(void);
extern void yyerror(const char*);

void report_lexer_error(const char *symbol);

#endif
