#include "symbol_table.h"

void insert_row_into_symbol_table(char *token_type, char *token_name, char *row_type) {
  struct symbol_table_row *new_row = NULL;
  // struct symbol_table_row *existent_row = NULL;

  char *st_hash_key = create_hash_key(0, "token_type", "token_name", "row_type");

  new_row = (struct symbol_table_row *) malloc(sizeof (struct symbol_table_row));

  new_row->key = st_hash_key;
  new_row->token_name = token_name;
  new_row->token_type = token_type;
  new_row->row_type = row_type;
}

char *create_hash_key(int scope, char *token_type, char *token_name, char *row_type) {
  return "scope_rtype_ttype_tname";
}
struct symbol_table_row *find_row(char* key, struct symbol_table_row* symbol_table) {
  return NULL;
}

void print_symbol_table() {
  printf("========== Symbol Table ==========\n");
  printf("==================\n");
}

void free_symbol_table() {
}
