ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o args.o
	gcc -o program main.o args.o

main.o: main.c args.h
	gcc -c main.c

args.o: args.c args.h
	gcc -c args.c

run:
	./program

clean:
	rm *.o

memcheck:
	valgrind --leak-check=yes ./program
