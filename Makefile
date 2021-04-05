FILES = src/lexical/scanner.c src/syntax/parser.c src/main.c
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
	./bemolang.out "./examples/foo.bml"

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./bemolang.out "./examples/foo.bml"

clear:
	rm *.yy.c *.out
