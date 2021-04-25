FILES = src/lexical/scanner.c src/syntax/parser.c src/syntax/ast.c src/main.c
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
	./bemolang.out "./examples/1_function.bml"
	./bemolang.out "./examples/2_simple_program.bml"
	./bemolang.out "./examples/3_function_calls_and_polymorphism.bml"
	./bemolang.out "./examples/4_natural_numbers_as_sets.bml"
	# ./bemolang.out "./examples/5_syntax_error.bml"
	# ./bemolang.out "./examples/6_invalid_symbols.bml"
	./bemolang.out "./examples/7_if_else_corner_case.bml"
	./bemolang.out "./examples/foo.bml"

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./bemolang.out "./examples/4_natural_numbers_as_sets.bml"

clear:
	rm *.yy.c *.out
