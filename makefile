CFLAGS = -Wall -pedantic -g
CC = gcc
EXES = sqlite-clone

all: $(EXES)

sqlite-clone: input_buffer.o repl.o
	$(CC) input_buffer.o repl.o -o sqlite-clone

input_buffer.o: input_buffer.h input_buffer.c
	$(CC) -c $(CFLAGS) input_buffer.c

repl.o: repl.c
	$(CC) -c $(CFLAGS) repl.c

.PHONY: clean 
clean:
	rm -rf *.o $(TARGETS)