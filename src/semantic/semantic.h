#ifndef semantic_h
#define semantic_h

#include "../entities/symbol_table.h"

void check_for_main_function(scope *initial_scope);
void check_if_identifier_has_already_been_declared(scope *current_scope, const char *identifier);

#endif
