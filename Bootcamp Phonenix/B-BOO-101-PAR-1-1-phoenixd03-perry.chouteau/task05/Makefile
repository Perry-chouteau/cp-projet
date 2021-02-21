##
## EPITECH PROJECT, 2020
## B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
## File description:
## Makefile
##

SRC =	sorted_params.c

OBJ = $(SRC:.c=.o)

NAME = sorted_params

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf *~

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
