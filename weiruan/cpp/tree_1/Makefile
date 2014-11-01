
CC=g++
OBJ_SUM=
SUBDIR= bintree stack src
export SS=hhh

release:
	for I in $(SUBDIR);\
	do \
		make -C $$I;\
	done
#	$(CC) -o test $(OBJ_SUM)
	echo $$SS

.PHONY: all


.PHONY: clean  
clean:
	for I in $(SUBDIR);do\
		make -C $$I clean;\
	done
