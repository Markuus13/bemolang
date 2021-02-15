P ="./without-explicit-path"

flex:
	flex bemolang.l
	gcc lex.yy.c -o bemolang.out
	./bemolang.out ${P}

clear:
	rm *.yy.c *.out
