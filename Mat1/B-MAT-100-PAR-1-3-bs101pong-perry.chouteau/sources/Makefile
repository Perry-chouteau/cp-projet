##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## sources Makefile
##


SRC =	xyz_in_vector_ex1.c

OBJ =	$(SRC:.c=.o)

NAME =	test

ALL:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f *~
	rm -f $(OBJ)
	rm \#*#

fclean:	clean
	rm -f $(NAME)

re:	fclean all
