eval: eval.o token.o
	gcc -o eval token.o eval.o

eval.o:
	gcc -o eval.o -c eval.c -Wall

token.o:
	gcc -o token.o -c token.c -Wall
