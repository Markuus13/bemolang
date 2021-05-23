#include "symbol_table.h"
#include <string.h>
#include <stdio.h>

extern scope *initial_scope;

scope *push_scope(scope *parent_scope, int scope_id) {
  symbol_table_row *symbol_table = NULL;

  scope *new_scope = (scope *) malloc(sizeof(scope));
  new_scope->symbol_table = symbol_table;
  new_scope->parent = parent_scope;
  new_scope->id = scope_id;

  LL_APPEND(initial_scope, new_scope);

  return new_scope;
}

scope *pop_scope(scope *current_scope) {
  if (current_scope == NULL) return NULL;
  return current_scope->parent;
}

void update_function_into_symbol_table(
  scope* current_scope,
  char *token_type,
  char *token_name,
  char *row_type,
  int function_arity
) {
  char *key = generate_hash_key(token_type, token_name, row_type);
  symbol_table_row *existent_function_row = find_row(current_scope->symbol_table, key);

  HASH_DEL(current_scope->symbol_table, existent_function_row);

  symbol_table_row *new_row = (symbol_table_row *) malloc(sizeof (symbol_table_row));
  new_row->key = key;
  new_row->token_name = token_name;
  new_row->token_type = token_type;
  new_row->row_type = row_type;
  new_row->arity = function_arity;

  HASH_ADD_KEYPTR(
    hh,
    current_scope->symbol_table,
    new_row->key,
    strlen(new_row->key),
    new_row
  );
}

#define HASH_REPLACE_PTR(head,ptrfield,add,replaced)                             \
    HASH_REPLACE(hh,head,ptrfield,sizeof(void *),add,replaced)

void insert_row_into_symbol_table(
  scope *current_scope,
  char *token_type,
  char *token_name,
  char *row_type,
  int function_arity
) {
  symbol_table_row *new_row = NULL;
  symbol_table_row *existent_row = NULL;

  char *key = generate_hash_key(token_type, token_name, row_type);
  existent_row = find_row(current_scope->symbol_table, key);

  if (existent_row == NULL) {
    new_row = (symbol_table_row *) malloc(sizeof (symbol_table_row));

    new_row->key = key;
    new_row->token_name = token_name;
    new_row->token_type = token_type;
    new_row->row_type = row_type;
    new_row->arity = function_arity;

    HASH_ADD_KEYPTR(
      hh,
      current_scope->symbol_table,
      new_row->key,
      strlen(new_row->key),
      new_row
    );
  }
}

char *generate_hash_key(char *token_type, char *token_name, char *row_type) {
  int key_length = (strlen(token_type) + strlen(token_name) + strlen(row_type) + 4);
  char *key = (char *) malloc(key_length * sizeof(char));
  key[0] = '\0';

  strcat(key, token_type);
  strcat(key, "_");
  strcat(key, token_name);
  strcat(key, "_");
  strcat(key, row_type);

  return key;
}

symbol_table_row *find_row(symbol_table_row* symbol_table, char* key) {
  symbol_table_row* st_row;
  HASH_FIND_STR(symbol_table, key, st_row);
  return st_row;
}

symbol_table_row *lookup(scope *current_scope, const char* identifier) {
  symbol_table_row *result_st_row = NULL;

  for (scope *aux_curr_scope = current_scope; aux_curr_scope != NULL; aux_curr_scope = aux_curr_scope->parent) {
    for (symbol_table_row *aux_st = aux_curr_scope->symbol_table; aux_st != NULL; aux_st = aux_st->hh.next) {
      if (!strcmp(aux_st->token_name, identifier)) {
        result_st_row = aux_st;
        break;
      }
    }
  }

  return result_st_row;
}

void print_symbol_table(scope* initial_scope) {
  scope* scope;

  printf("======================== Symbol Table ================================================\n");
  printf("Token Type,\t\tToken Name,\t\tRow Type,\tArity,\tScope-depth,\tAddress,\tKey\n");
  printf("======================================================================================\n");
  LL_FOREACH(initial_scope, scope) {
    for(symbol_table_row *st_row = scope->symbol_table; st_row != NULL; st_row = st_row->hh.next) {
      printf(
        "%s,\t\t\t%s,\t\t\t%s,",
        st_row->token_type,
        st_row->token_name,
        st_row->row_type
      );
      if (strcmp(st_row->row_type, "function")) { printf("\tN/A,"); }
      else { printf("\t%d,", st_row->arity); }

      printf(
        "\th%d,\t%p,\t%s\n",
        scope->id,
        scope,
        st_row->key
      );
    }
  }
  printf("======================================================================================\n");
}

void free_symbol_table(scope* initial_scope) {
  symbol_table_row* st_row;
  symbol_table_row* st_aux_row;
  scope* scope;
  struct scope* scope_aux;

  LL_FOREACH_SAFE(initial_scope, scope, scope_aux) {
    HASH_ITER(hh, scope->symbol_table, st_row, st_aux_row) {
      HASH_DEL(scope->symbol_table, st_row);
      free(st_row->token_name);
      free(st_row->token_type);
      free(st_row->key);
      free(st_row);
    }
    LL_DELETE(initial_scope, scope);
    free(scope->symbol_table);
    free(scope);
  }
  free (initial_scope);
}
