##
## EPITECH PROJECT, 2020
## B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
## File description:
## Makefile
##

SRC =	my_putchar.c	\
	iterative_factorial.c	\
	my_strcapitalize.c	\
	my_strcpy.c	\
	my_strstr.c	\
	my_strncmp.c	\
	my_strcapitalize.c	\
	recursive_power.c

OBJ = $(SRC:.c=.o)

NAME = libphoenix.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	rm -rf *~

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
