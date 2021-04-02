FILES = src/lexical/bemolang.c src/syntactic/bemolang.c src/main.c
FLAGS = -g -Wall

install:
	apt install flex valgrind

flex:
	flex src/lexical/bemolang.l

bison:
	bison -d src/syntactic/bemolang.y

compile: bison flex
	gcc $(FILES) $(FLAGS) -o bemolang.out

run:
	./bemolang.out "./examples/foo.bml"

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./bemolang.out "./examples/foo.bml"

clear:
	rm *.yy.c *.out
