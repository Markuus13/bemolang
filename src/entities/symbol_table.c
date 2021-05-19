#include "symbol_table.h"
#include <string.h>
#include <stdio.h>

extern struct symbol_table_row *symbol_table;

void insert_row_into_symbol_table(char *token_type, char *token_name, char *row_type) {
  struct symbol_table_row *new_row = NULL;
  struct symbol_table_row *existent_row = NULL;
  char *key = generate_hash_key(0, token_type, token_name, row_type);
  existent_row = find_row(key, existent_row);

  if (existent_row == NULL) {
    new_row = (struct symbol_table_row *) malloc(sizeof (struct symbol_table_row));

    new_row->key = key;
    new_row->token_name = token_name;
    new_row->token_type = token_type;
    new_row->row_type = row_type;

    HASH_ADD_STR(symbol_table, key, new_row);
  } else {
    // TODO: Remove this condition or print only in verbose mode
    printf("Debug: Symbol table insertion error");
  }
}

// "scope0_rtype_ttype_tname_rtype";
char *generate_hash_key(int scope, char *token_type, char *token_name, char *row_type) {
  char temp_scope[] = "scope0";
  int key_length = strlen(temp_scope) + strlen(token_type) + strlen(token_name) + strlen(row_type) + 4;
  char *key = malloc(key_length * sizeof (char *));
  strcat(key, temp_scope);
  strcat(key, "_");
  strcat(key, token_type);
  strcat(key, "_");
  strcat(key, token_name);
  strcat(key, "_");
  strcat(key, row_type);

  return key;
}

struct symbol_table_row *find_row(char* key, struct symbol_table_row* st_row) {
  HASH_FIND_STR(symbol_table, key, st_row);
  return st_row;
}

void print_symbol_table() {
  printf("======================== Symbol Table ================================================\n");
  printf("Token Type,\t\tToken Name,\t\tRow Type,\tScope,\tKey\n");
  printf("======================================================================================\n");
  for(struct symbol_table_row *st_row = symbol_table; st_row != NULL; st_row = st_row->hh.next) {
    printf(
      "%s,\t\t\t%s,\t\t\t%s,\t%d,\t%s\n",
      st_row->token_type,
      st_row->token_name,
      st_row->row_type,
      st_row->scope,
      st_row->key
    );
  }
  printf("======================================================================================\n");
}

void free_symbol_table() {
  struct symbol_table_row* st_row;
  struct symbol_table_row* st_aux_row;

  HASH_ITER(hh, symbol_table, st_row, st_aux_row) {
    HASH_DEL(symbol_table, st_row);
    free(st_row->key);
    free(st_row);
  }
}
