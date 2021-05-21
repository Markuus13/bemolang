#ifndef symbol_table_h
#define symbol_table_h

#include "uthash.h"
#include "utlist.h"

typedef struct symbol_table_row {
  UT_hash_handle hh;
  char* key;
  char* token_type;
  char* token_name;
  char* row_type;
} symbol_table_row;

typedef struct scope {
  struct scope *parent;
  struct symbol_table_row *symbol_table;
  struct scope *next; /* just to keep track of a scope list, so we can easily print/free this structure */
} scope;

struct scope *push_scope(struct scope *initial_scope, struct scope *parent_scope);
struct symbol_table_row *lookup(struct scope *current_scope, char* key);
struct scope *pop_scope(struct scope *current_scope);

void insert_row_into_symbol_table(struct scope* current_scope, char *token_type, char *token_name, char *row_type);
void print_symbol_table(struct symbol_table_row* symbol_table);
void free_symbol_table(struct symbol_table_row* symbol_table);

struct symbol_table_row *find_row(struct symbol_table_row* symbol_table, char* key);
char *generate_hash_key(char *token_type, char *token_name, char *row_type);

void print_symbol_table2(struct scope* initial_scope);
void free_symbol_table2(struct scope* initial_scope);

#endif
