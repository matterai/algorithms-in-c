CC=gcc
TARGET=main

all:
	$(CC) -c -o io.o io.c
	$(CC) -c -o sortings.o sortings.c
	$(CC) -c -o main.o main.c
	$(CC) -o $(TARGET) io.o sortings.o main.o
clean:
	rm io.o sortings.o main.o