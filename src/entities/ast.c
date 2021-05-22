# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "ast.h"

int ast_printer_aux = 0;

struct ast_node *create_ast_node(
  int node_type,
  char *value,
  struct ast_node *first_node,
  struct ast_node *second_node,
  struct ast_node *third_node,
  struct ast_node *fourth_node
  ) {
  struct ast_node *ast_node = (struct ast_node*) malloc(sizeof(struct ast_node));

  if (!ast_node) {
    yyerror("Out of memory error.");
    exit(0);
  }

  ast_node->node_type = node_type;
  ast_node->value = value;
  ast_node->first_node = first_node;
  ast_node->second_node = second_node;
  ast_node->third_node = third_node;
  ast_node->fourth_node = fourth_node;

  return ast_node;
}

void print_node_type_name(int node_type) {
  switch(node_type) {
  case TRANSLATION_UNIT:
    printf("type: TRANSLATION_UNIT");
    break;

  case EXTERNAL_DECLARATION_LIST:
    printf("type: EXTERNAL_DECLARATION_LIST");
    break;

  case FUNCTION_DEFINITION:
    printf("type: FUNCTION_DEFINITION");
    break;

  case TYPE_SPECIFIER:
    printf("type: TYPE_SPECIFIER");
    break;

  case DECLARATOR:
    printf("type: DECLARATOR");
    break;

  case PARAMETER_LIST:
    printf("type: PARAMETER_LIST");
    break;

  case PARAMETER_DECLARATION:
    printf("type: PARAMETER_DECLARATION");
    break;

  case LOGICAL_OR_EXPRESSION:
    printf("type: LOGICAL_OR_EXPRESSION");
    break;

  case LOGICAL_AND_EXPRESSION:
    printf("type: LOGICAL_AND_EXPRESSION");
    break;

  case EQUALITY_EXPRESSION:
    printf("type: EQUALITY_EXPRESSION");
    break;

  case RELATIONAL_EXPRESSION:
    printf("type: RELATIONAL_EXPRESSION");
    break;

  case BELONGS_TO_EXPRESSION:
    printf("type: BELONGS_TO_EXPRESSION");
    break;

  case ADDITIVE_EXPRESSION:
    printf("type: ADDITIVE_EXPRESSION");
    break;

  case MULTIPLICATIVE_EXPRESSION:
    printf("type: MULTIPLICATIVE_EXPRESSION");
    break;

  case UNARY_EXPRESSION:
    printf("type: UNARY_EXPRESSION");
    break;

  case UNARY_OPERATOR:
    printf("type: UNARY_OPERATOR");
    break;

  case TERM:
    printf("type: TERM");
    break;

  case FUNCTION_ARG_CONSTANT_EXPRESSION:
    printf("type: FUNCTION_ARG_CONSTANT_EXPRESSION");
    break;

  case FUNCTION_CALL_EXPRESSION:
    printf("type: FUNCTION_CALL_EXPRESSION");
    break;

  case SET_FUNCTION_CALL_EXPRESSION:
    printf("type: SET_FUNCTION_CALL_EXPRESSION");
    break;

  case ARGUMENT_LIST:
    printf("type: ARGUMENT_LIST");
    break;

  case STATEMENT_LIST:
    printf("type: STATEMENT_LIST");
    break;

  case DECLARATION:
    printf("type: DECLARATION");
    break;

  case ASSIGNMENT_STATEMENT:
    printf("type: ASSIGNMENT_STATEMENT");
    break;

  case SET_MEMBERSHIP_EXPRESSION:
    printf("type: SET_MEMBERSHIP_EXPRESSION");
    break;

  case SELECTION_STATEMENT:
    printf("type: SELECTION_STATEMENT");
    break;

  case ITERATION_STATEMENT:
    printf("type: ITERATION_STATEMENT");
    break;

  case IO_STATEMENT:
    printf("type: IO_STATEMENT");
    break;

  case JUMP_STATEMENT:
    printf("type: JUMP_STATEMENT");
    break;

  case tIDENTIFIER:
    printf("type: tIDENTIFIER");
    break;

  case COMPOUND_STATEMENT:
    printf("type: COMPOUND_STATEMENT");
    break;

  }
}

void print_ast(ast_node *ast_node) {
  if (ast_node == NULL) {
    return;
  }
  ast_printer_aux += 3;

  for (int i = 0; i < ast_printer_aux; i++) printf("-");
  printf("[AST-H%d] - ", ast_printer_aux / 3);
  print_node_type_name(ast_node->node_type);
  if (ast_node->value != NULL) printf(" - value: %s", ast_node->value);
  printf("\n");

  print_ast(ast_node->first_node);
  print_ast(ast_node->second_node);
  print_ast(ast_node->third_node);
  print_ast(ast_node->fourth_node);

  ast_printer_aux -= 3;
}

void free_ast(ast_node *ast_node) {
  if (ast_node == NULL) return;

  free_ast(ast_node->first_node);
  free_ast(ast_node->second_node);
  free_ast(ast_node->third_node);
  free_ast(ast_node->fourth_node);

  if (ast_node->value != NULL) {
    free(ast_node->value);
  }
  free(ast_node);
}
