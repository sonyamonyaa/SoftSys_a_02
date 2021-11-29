CC=gcc
AR=ar
FLAGS= -Wall -g
OBJ= main.o my_mat.o

all: connections

connections: main.o libclass.a
	$(CC) $(FLAGS) -o connections main.o libclass.a -lm

libclass.a: $(OBJ)
	$(AR) -rcs libclass.a $(OBJ)

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections
