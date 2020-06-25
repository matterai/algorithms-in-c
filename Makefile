CC=gcc
TARGET=main

all:
	$(CC) -g -c -o io.o io.c
	$(CC) -g -c -o sortings.o sortings.c
	$(CC) -g -c -o main.o main.c
	$(CC) -g -o $(TARGET) io.o sortings.o main.o
clean:
	rm io.o sortings.o main.o