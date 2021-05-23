FILES = src/lexical/scanner.c src/syntax/parser.c src/semantic/semantic.c src/entities/ast.c src/entities/symbol_table.c src/error_handler/errors.c src/main.c
FLAGS = -g -Wall

install:
	apt install flex valgrind

flex:
	flex src/lexical/scanner.l

bison:
	bison -d src/syntax/parser.y

compile: bison flex
	gcc $(FILES) $(FLAGS) -o bemolang.out

run:
	# ./bemolang.out "./examples/foo.bml"
	# ./bemolang.out "./examples/1_subsum_program.bml"
	# ./bemolang.out "./examples/2_simple_program.bml"
	# ./bemolang.out "./examples/3_function_calls_and_polymorphism.bml"
	# ./bemolang.out "./examples/4_natural_numbers_as_sets.bml"
	# ./bemolang.out "./examples/5_syntax_error.bml"
	# ./bemolang.out "./examples/6_invalid_symbols.bml"
	# ./bemolang.out "./examples/7_if_else_corner_case.bml"
	# ./bemolang.out "./examples/8_some_example.bml"
	# ./bemolang.out "./examples/9_syntax_error_2.bml"
	# ./bemolang.out "./examples/11_main_without_return.bml"
	# ./bemolang.out "./examples/12_without_main_function.bml"

debug: bison flex
	gcc $(FILES) $(FLAGS) -fsanitize=address -o bemolang.out

valgrind: compile
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./bemolang.out "./examples/4_natural_numbers_as_sets.bml"

clear:
	rm *.yy.c *.out
