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
  int id;
  struct scope *parent;
  symbol_table_row *symbol_table;
  struct scope *next; /* just to keep track of a scope list, so we can easily print/free this structure */
} scope;

scope *push_scope(scope *parent_scope, int scope_id);
symbol_table_row *lookup(scope *current_scope, char* key);
scope *pop_scope(scope *current_scope);

void insert_row_into_symbol_table(scope* current_scope, char *token_type, char *token_name, char *row_type);
void print_symbol_table(symbol_table_row* symbol_table);
void free_symbol_table(symbol_table_row* symbol_table);

symbol_table_row *find_row(symbol_table_row* symbol_table, char* key);
char *generate_hash_key(char *token_type, char *token_name, char *row_type);

void print_symbol_table2(scope* initial_scope);
void free_symbol_table2(scope* initial_scope);

#endif
