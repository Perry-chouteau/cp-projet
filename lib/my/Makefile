##-----------------------
## EPITECH PROJECT, 2020
## makefile
## File description:
## gcc , build , lib.
##

SRC = 	$(wildcard *.c)
OBJ =	$(SRC: .c=.o)

ALL: 	make libmy
	make include

libmy:	$(OBJ)
	gcc -c $(SRC)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	make clean_all

include:mkdir include
	cp my.h include/
	cp include ../../
	rm my.h
	rm include/

clean_all:
	rm *.o
	rm *.c
