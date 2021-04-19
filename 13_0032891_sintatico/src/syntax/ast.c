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
  struct ast_node *third_node
  ) {
  struct ast_node *ast_node = malloc(sizeof(struct ast_node));

  if (!ast_node) {
    yyerror("Out of memory error.");
    exit(0);
  }

  ast_node->node_type = node_type;
  ast_node->value = value;
  ast_node->first_node = first_node;
  ast_node->second_node = second_node;
  ast_node->third_node = third_node;

  return ast_node;
}

void print_ast(struct ast_node *ast_node) {
  if (ast_node == NULL) {
    return;
  }
  ast_printer_aux += 3;

  if (ast_node->value != NULL) {
    for (int i = 0; i < ast_printer_aux; i++) printf("-");
    printf("%s\n", ast_node->value);
  }

  print_ast(ast_node->first_node);
  print_ast(ast_node->second_node);
  print_ast(ast_node->third_node);

  ast_printer_aux -= 3;
}

void free_ast(struct ast_node *ast_node) {
  if (ast_node == NULL) return;

  if (ast_node->value != NULL) {
    free(ast_node->value);
  }

  free(ast_node);
}
