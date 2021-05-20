#ifndef scope_h
#define scope_h

#include "symbol_table.h"

struct scope {
  struct scope *parent;
  struct symbol_table_row *symbol_table;
};

struct scope* create_scope(struct scope *parent_scope, struct symbol_table_row *symbol_table);

#endif
