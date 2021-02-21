##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC =	sources/xyz_in_vector_ex1.c
OBJ =   $(SRC:.c=.o)

CFLAGS +=       -L sources/
CFLAGS +=       -I./includes

NAME =	exe_cute

ALL:	libmy.a

libmy.a:
	cd sources/ && $(MAKE)

clean:
	rm -f $(OBJ)

fclean:	clean
	cd tests/ && rm -f $(NAME)

re:	fclean all

unit_tests:
	cd tests/ && $(MAKE)

run_tests:
	cd tests/ && ./$(NAME)

.PHONY:	all clean fclean re
