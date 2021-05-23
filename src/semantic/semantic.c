#include "semantic.h"
#include "../error_handler/errors.h"

void check_for_main_function(scope *initial_scope) {
  symbol_table_row *st_row = find_row(initial_scope->symbol_table, "int_main_function");

  if (st_row == NULL) {
    report_main_function_not_defined();
  }
}
