all: 
	cc -c func.c -o func.o -g -Wall -Wextra
	cc -c main2.c -o main2.o -g -Wall -Wextra
	cc -lreadline -o bin main2.o func.o
	rm *.o
