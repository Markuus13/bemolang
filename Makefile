P ="./without-explicit-path"

install:
	apt install flex valgrind

flex:
	flex bemolang.l
	gcc lex.yy.c -g -Wall -o bemolang.out
	./bemolang.out ${P}

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./bemolang.out ${P}

clear:
	rm *.yy.c *.out
