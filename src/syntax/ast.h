/* Interface to the lexer */
extern int yylex(void);
void yyerror(const char*);

/* Nodes in the abstract syntax tree */
struct ast_node {
 int node_type;
 struct ast_node *first_node;
 struct ast_node *second_node;
};

/* AST functions */
struct ast_node *create_ast_node(int node_type, struct ast_node *left_node, struct ast_node *right_node);


/* AST type enums */
enum AST_NODE_TYPES {
  EXTERNAL_DECLARATION_LIST = 0,
  EXTERNAL_DECLARATION = 1,
  FUNCTION_DEFINITION = 2
};
