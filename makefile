CFLAGS = -Wall -pedantic -g
CC = gcc
EXES = lab4-fuse


clean:
	-rm -f repl.o
	-rm -f sqlite-clone-repl