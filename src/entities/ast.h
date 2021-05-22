#ifndef ast_h
#define ast_h
#pragma once

/* Interface to the lexer */
extern int yylex(void);
extern void yyerror(const char*);

/* Nodes in the abstract syntax tree */
typedef struct ast_node {
 int node_type;
 char *value;
 struct ast_node *first_node;
 struct ast_node *second_node;
 struct ast_node *third_node;
 struct ast_node *fourth_node;
} ast_node;

/* AST functions */
struct ast_node *create_ast_node(
  int node_type,
  char *value,
  struct ast_node *first_node,
  struct ast_node *second_node,
  struct ast_node *third_node,
  struct ast_node *fourth_node
);

void free_ast(struct ast_node *ast_node);
void print_ast(struct ast_node *ast_node);

/* AST type enums */
enum AST_NODE_TYPES {
  TRANSLATION_UNIT = 0,
  EXTERNAL_DECLARATION_LIST,
  FUNCTION_DEFINITION,
  TYPE_SPECIFIER,
  DECLARATOR,
  PARAMETER_LIST,
  PARAMETER_DECLARATION,
  LOGICAL_OR_EXPRESSION,
  LOGICAL_AND_EXPRESSION,
  EQUALITY_EXPRESSION,
  RELATIONAL_EXPRESSION,
  BELONGS_TO_EXPRESSION,
  ADDITIVE_EXPRESSION,
  MULTIPLICATIVE_EXPRESSION,
  UNARY_EXPRESSION,
  UNARY_OPERATOR,
  TERM,
  FUNCTION_ARG_CONSTANT_EXPRESSION,
  FUNCTION_CALL_EXPRESSION,
  SET_FUNCTION_CALL_EXPRESSION,
  ARGUMENT_LIST,
  STATEMENT_LIST,
  DECLARATION,
  ASSIGNMENT_STATEMENT,
  SET_MEMBERSHIP_EXPRESSION,
  SELECTION_STATEMENT,
  ITERATION_STATEMENT,
  IO_STATEMENT,
  JUMP_STATEMENT,
  tIDENTIFIER,
  COMPOUND_STATEMENT
};

#endif
