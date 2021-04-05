// # include <stdio.h>
// # include <stdlib.h>
// # include <stdarg.h>
// # include "ast.h"

// struct ast_node *create_ast_node(int node_type, struct ast_node *left_node, struct ast_node *right_node) {
//   struct ast_node *ast_node = malloc(sizeof(struct ast_node));

//   if (!ast_node) {
//     yyerror("Out of memory error.");
//     exit(0);
//   }

//   ast_node->node_type = node_type;
//   ast_node->left_node = left_node;
//   ast_node->right_node = right_node;

//   return ast_node;
// }

// // struct ast_node *add_float_value(float d) {
// //   struct numval *num = malloc(sizeof(struct num_val));

// //   if(!num) {
// //     yyerror("Out of memory error.");
// //     exit(0);
// //   }

// //   num->node_type = 'K';
// //   num->number = d;

// //   return (struct ast_node *) num;
// // }

// // float evaluate_ast_node(struct ast_node *ast_node) {
// //  float value;

// //  switch(ast_node->node_type) {
// //   case 'K':
// //     value = ((struct num_val *) ast_node)->number;
// //     break;
// //   case '+':
// //     value = evaluate_ast_node(ast_node->left_node) + evaluate_ast_node(ast_node->right_node);
// //     break;
// //   case '-':
// //     value = evaluate_ast_node(ast_node->left_node) - evaluate_ast_node(ast_node->right_node);
// //     break;
// //   case '*':
// //     value = evaluate_ast_node(ast_node->left_node) * evaluate_ast_node(ast_node->right_node);
// //     break;
// //   case '/':
// //     value = evaluate_ast_node(ast_node->left_node) / evaluate_ast_node(ast_node->right_node);
// //     break;
// //   case '|':
// //     value = evaluate_ast_node(ast_node->left_node);
// //     if (value < 0) {
// //       value = -value;
// //     }
// //     break;
// //   case 'M':
// //     value = -evaluate_ast_node(ast_node->left_node);
// //     break;

// //   default: printf("Internal error: bad node. (%c)\n", ast_node->node_type);
// //  }
// //  return value;
// // }

// // void tree_free(struct ast_node *ast_node) {
// //   switch(ast_node->node_type) {
// //     case '+':
// //     case '-':
// //     case '*':
// //     case '/':
// //       tree_free(ast_node->right_node);
// //     case '|':
// //     case 'M':
// //       tree_free(ast_node->left_node);
// //     case 'K':
// //       free(ast_node);
// //     break;
// //       default: printf("internal error: free bad node %c\n", ast_node->node_type);
// //   }
// // }

