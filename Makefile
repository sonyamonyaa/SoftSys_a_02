CC=gcc
AR=ar
FLAGS= -Wall -g
OBJ= main.o my_mat.o

all: libclass mains maind

mains: main.o
	$(CC) $(FLAGS) -o mains $(OBJ_MAIN) libclass.a -lm

maind: main.o
	$(CC) $(FLAGS) -o maind $(OBJ_MAIN) ./libclass.so -lm
	
libclass: libclass.a libclass.so

libclass.so: $(OBJ)
	$(CC) -shared -o libclass.so $(OBJ)

libclass.a: $(OBJ)
	$(AR) -rcs libclass.a $(OBJ)

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
