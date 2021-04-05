/* Interface to the lexer */
extern int yylex(void);
void yyerror(const char*);

/* Nodes in the abstract syntax tree */
struct ast {
 int node_type;
 struct ast *left_node;
 struct ast *right_node;
};

struct num_val {
 int node_type;
 float number;
};

/* build an AST */
struct ast *create_ast(int nodetype, struct ast *l, struct ast *r);
struct ast *create_num(float value);
float evaluate_ast(struct ast *);

/* delete and free an AST */
void tree_free(struct ast *);
