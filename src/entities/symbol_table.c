#include "symbol_table.h"
#include <string.h>
#include <stdio.h>

struct scope *push_scope(struct scope *initial_scope, struct scope *parent_scope) {
  struct symbol_table_row *symbol_table = NULL;

  struct scope *new_scope = (struct scope *) malloc(sizeof(struct scope));
  new_scope->symbol_table = symbol_table;
  new_scope->parent = parent_scope;
  LL_APPEND(initial_scope, new_scope);

  return new_scope;
}

struct scope *pop_scope(struct scope *current_scope) {
  if (current_scope == NULL) return NULL;
  return current_scope->parent;
}

void insert_row_into_symbol_table(
  struct scope *current_scope,
  char *token_type,
  char *token_name,
  char *row_type
) {
  struct symbol_table_row *new_row = NULL;
  struct symbol_table_row *existent_row = NULL;

  char *key = generate_hash_key(token_type, token_name, row_type);
  existent_row = find_row(current_scope->symbol_table, key);

  if (existent_row == NULL) {
    new_row = (struct symbol_table_row *) malloc(sizeof (struct symbol_table_row));

    new_row->key = key;
    new_row->token_name = token_name;
    new_row->token_type = token_type;
    new_row->row_type = row_type;

    HASH_ADD_KEYPTR(
      hh,
      current_scope->symbol_table,
      current_scope->symbol_table->key,
      strlen(current_scope->symbol_table->key),
      new_row
    );
  } else {
    printf("Debug: Symbol table insertion error");
  }
}

char *generate_hash_key(char *token_type, char *token_name, char *row_type) {
  int key_length = (strlen(token_type) + strlen(token_name) + strlen(row_type) + 4);
  char *key = (char *) malloc(key_length * sizeof(char));

  strcat(key, token_type);
  strcat(key, "_");
  strcat(key, token_name);
  strcat(key, "_");
  strcat(key, row_type);

  return key;
}

struct symbol_table_row *find_row(struct symbol_table_row* symbol_table, char* key) {
  struct symbol_table_row* st_row;
  HASH_FIND_STR(symbol_table, key, st_row);
  return st_row;
}

struct symbol_table_row * lookup(struct scope *current_scope, char* key) {
  struct scope * aux_cur_scope = current_scope;
  struct symbol_table_row* st_row;

  while(aux_cur_scope != NULL && st_row != NULL) {
    find_row(current_scope->symbol_table, key);
    aux_cur_scope = current_scope->parent;
  }

  return st_row;
}

void print_symbol_table(struct symbol_table_row* symbol_table) {
  printf("======================== Symbol Table ================================================\n");
  printf("Token Type,\t\tToken Name,\t\tRow Type,\tKey\n");
  printf("======================================================================================\n");
  // for(struct symbol_table_row *st_row = symbol_table; st_row != NULL; st_row = st_row->hh.next) {
  //   printf(
  //     "%s,\t\t\t%s,\t\t\t%s,\t%s\n",
  //     st_row->token_type,
  //     st_row->token_name,
  //     st_row->row_type,
  //     st_row->key
  //   );
  // }
  printf("======================================================================================\n");
}

void free_symbol_table(struct symbol_table_row *symbol_table) {
  struct symbol_table_row* st_row;
  struct symbol_table_row* st_aux_row;

  HASH_ITER(hh, symbol_table, st_row, st_aux_row) {
    HASH_DEL(symbol_table, st_row);
    free(st_row->key);
    free(st_row);
  }
}

void print_symbol_table2(struct scope* initial_scope) {
  struct scope* scope;

  printf("======================== Symbol Table ================================================\n");
  printf("Token Type,\t\tToken Name,\t\tRow Type,\tKey\n");
  printf("======================================================================================\n");
  LL_FOREACH(initial_scope, scope) {
    for(struct symbol_table_row *st_row = scope->symbol_table; st_row != NULL; st_row = st_row->hh.next) {
      printf(
        "%s,\t\t\t%s,\t\t\t%s,\t%s\n",
        st_row->token_type,
        st_row->token_name,
        st_row->row_type,
        st_row->key
      );
    }
  }
  printf("======================================================================================\n");
}

void free_symbol_table2(struct scope* initial_scope) {
  struct symbol_table_row* st_row;
  struct symbol_table_row* st_aux_row;
  struct scope* scope;
  struct scope* scope_aux;

  LL_FOREACH_SAFE(initial_scope, scope, scope_aux) {
    HASH_ITER(hh, scope->symbol_table, st_row, st_aux_row) {
      HASH_DEL(scope->symbol_table, st_row);
      free(st_row->key);
      free(st_row);
    }
    LL_DELETE(initial_scope, scope);
    free(scope);
  }
}
