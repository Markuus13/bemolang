# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "ast.h"

struct ast *create_ast(int node_type, struct ast *left_node, struct ast *right_node) {
  struct ast *ast = malloc(sizeof(struct ast));

  if (!ast) {
    yyerror("Out of memory error.");
    exit(0);
  }

  ast->node_type = node_type;
  ast->left_node = left_node;
  ast->right_node = right_node;

  return ast;
}

struct ast *add_float_value(float d) {
  struct numval *num = malloc(sizeof(struct num_val));

  if(!num) {
    yyerror("Out of memory error.");
    exit(0);
  }

  num->node_type = 'K';
  num->number = d;

  return (struct ast *) num;
}

float evaluate_ast(struct ast *ast) {
 float value;

 switch(ast->node_type) {
  case 'K':
    value = ((struct num_val *) ast)->number;
    break;
  case '+':
    value = evaluate_ast(ast->left_node) + evaluate_ast(ast->right_node);
    break;
  case '-':
    value = evaluate_ast(ast->left_node) - evaluate_ast(ast->right_node);
    break;
  case '*':
    value = evaluate_ast(ast->left_node) * evaluate_ast(ast->right_node);
    break;
  case '/':
    value = evaluate_ast(ast->left_node) / evaluate_ast(ast->right_node);
    break;
  case '|':
    value = evaluate_ast(ast->left_node);
    if (value < 0) {
      value = -value;
    }
    break;
  case 'M':
    value = -evaluate_ast(ast->left_node);
    break;

  default: printf("Internal error: bad node. (%c)\n", ast->node_type);
 }
 return value;
}

void tree_free(struct ast *ast) {
  switch(ast->node_type) {
    case '+':
    case '-':
    case '*':
    case '/':
      tree_free(ast->right_node);
    case '|':
    case 'M':
      tree_free(ast->left_node);
    case 'K':
      free(ast);
    break;
      default: printf("internal error: free bad node %c\n", ast->node_type);
  }
}

