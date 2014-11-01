OBJ=bintree.o
OBJ_SUM+=$(OBJ)

INC= ../include
CC= g++

$(OBJ): bintree.cpp 
	$(CC) -c $< -I $(INC)
.PHONY: clean
	
clean:
	rm *.o

