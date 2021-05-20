#include "scope.h"

struct scope* create_scope(struct scope *parent_scope, struct symbol_table_row *symbol_table) {
  struct scope *scope = malloc(sizeof (struct scope *));
  scope->parent = NULL;
  scope->symbol_table = symbol_table;
  return scope;
}
