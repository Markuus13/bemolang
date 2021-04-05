#pragma once

/* Interface to the lexer */
extern int yylex(void);
void yyerror(const char*);

/* Nodes in the abstract syntax tree */
struct ast_node {
 int node_type;
 char *value;
 struct ast_node *first_node;
 struct ast_node *second_node;
 struct ast_node *third_node;
};

/* AST functions */
struct ast_node *create_ast_node(
  int node_type,
  char *value,
  struct ast_node *first_node,
  struct ast_node *second_node,
  struct ast_node *third_node
);

void print_ast(struct ast_node *ast_node);

/* AST type enums */
enum AST_NODE_TYPES {
  EXTERNAL_DECLARATION_LIST = 0,
  FUNCTION_DEFINITION = 1,
  TYPE_SPECIFIER = 2,
  PARAMETER_LIST = 3,
  PARAMETER_DECLARATION = 4
};
