objects = main.o asm.o

.PHONY: all
all: main

.PHONY: clean
clean:
	-rm -f main $(objects)

main: main.o asm.o
	clang -o main main.o asm.o

main.o: main.c
	clang -c main.c -o main.o

asm.o: asm.S
	clang -c asm.S -o asm.o