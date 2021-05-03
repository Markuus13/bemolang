#include "uthash.h"
struct symbol_table_row {
  UT_hash_handle hh;
  char* key;
  char* token_type;
  char* token_name;
  char* row_type;
  int scope;
};
void insert_row_into_symbol_table(char *token_type, char *token_name, char *row_type);
void print_symbol_table();
void free_symbol_table();

struct symbol_table_row *find_row(char* key, struct symbol_table_row* symbol_table);
char *create_hash_key(int scope, char *token_type, char *token_name, char *row_type);
