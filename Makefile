flex:
	flex bemolang.l
	gcc lex.yy.c -o bemolang.out
	./bemolang.out ./examples/5_syntax_error.bml

clear:
	rm *.yy.c *.out
