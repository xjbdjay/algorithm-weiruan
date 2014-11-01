
CC=g++
OBJ=test
#rely=$(shell $(CC) -MM testbin.cpp)
rely=`$(CC) -MM testbin.cpp`

.PHONY: all

all: $(OBJ) stack 


$(OBJ): testbin.o bintree.o
	$(CC) -g -o  $@ $^
	echo $(rely)
testbin.o : testbin.cpp bintree.h
	$(CC) -c -g $<
bintree.o : bintree.cpp bintree.h
	$(CC) -c -g $<

stack: teststack.o stack.h
	$(CC) -g -o  $@ $<
as: $(OBJ)
	objdump -D $(OBJ) > 1_$(OBJ).asm

.PHONY: clean  as
clean:
	rm *.o $(OBJ) *.asm stack
