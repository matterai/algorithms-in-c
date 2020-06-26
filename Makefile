CC=gcc
TARGET=main

all:
	$(CC) -g -c -o io.o io.c
	$(CC) -g -c -o sortings.o sortings.c
	$(CC) -g -c -o searchings.o searchings.c
	$(CC) -g -c -o main.o main.c
	$(CC) -g -o $(TARGET) io.o sortings.o searchings.o main.o
release:
	$(CC) -c -o io.o io.c
	$(CC) -c -o sortings.o sortings.c
	$(CC) -c -o searchings.o searchings.c
	$(CC) -c -o main.o main.c
	$(CC) -o $(TARGET) io.o sortings.o searchings.o main.o
clean:
	rm io.o sortings.o searchings.o main.o