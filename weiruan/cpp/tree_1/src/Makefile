INC=../include
#OBJ=testbin.o

#$(OBJ): testbin.cpp
#	$(CC) -c $< -I $(INC)
%o: %cpp
	$(CC) -c $< -I $(INC)
	
.PHONY: clean
	
clean:
	rm *.o
