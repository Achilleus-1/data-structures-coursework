CC = gcc
CFLAGS = -Wall -g -std=c99

all: stackDemo

stackDemo: stackDemo.o stackLinkedList.o
	$(CC) $(CFLAGS) -o stackDemo stackDemo.o stackLinkedList.o

stackDemo.o: stackDemo.c stackLinkedList.h
	$(CC) $(CFLAGS) -c stackDemo.c

stackLinkedList.o: stackLinkedList.c stackLinkedList.h
	$(CC) $(CFLAGS) -c stackLinkedList.c

clean:
	rm -f *.o stackDemo
