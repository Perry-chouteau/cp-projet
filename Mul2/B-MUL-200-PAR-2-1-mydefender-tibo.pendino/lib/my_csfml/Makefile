##
## EPITECH PROJECT, 2020
## B-MUL-200-PAR-2-1
## File description:
## Makefile
##

SRC =	data_linklist_all.c	\
		data_linklist_at.c	\
		linklist_all.c	\
		linklist_at.c	\
		data_create.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy_csfml.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	-rm -f $(OBJ)
	-rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re