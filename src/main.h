int print_tokens_enabled;

int line_counter;
int column_counter;

int parser_column;

void handle_token(int token);
void handle_unrecognized_symbol();
void count();
void print_token(int token);
