P = "./tests/invalid_symbols_1.bml"

install:
	apt-get update
	apt-get install flex

flex:
	flex bemolang.l
	gcc lex.yy.c -o bemolang.out

run:
	./bemolang.out ${P}

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./bemolang.out ${P}

clear:
	rm *.yy.c *.out
