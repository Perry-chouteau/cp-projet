##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make Makefile
##

SRC = *.c

OBJ	=	$(SRC:.c=.o)

ALL:
	cd lib/my && make
	gcc -o test $(SRC) -L lib/my/ -lmy -I./include -g3 -Wall -Wextra

clean:
	rm -rf *.o

.PHONY: clean
