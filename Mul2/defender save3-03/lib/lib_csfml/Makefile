##
## EPITECH PROJECT, 2020
## B-MUL-200-PAR-2-1-mydefender-tibo.pendino
## File description:
## Makefile
##

SRC =	sources/data_linklist_all.c	\
		sources/data_linklist_at.c	\
		sources/linklist_all.c	\
		sources/linklist_at.c	\
		sources/data_create.c

OBJ =	$(SRC:.c=.o)

NAME =	libcsfml.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf *~

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re