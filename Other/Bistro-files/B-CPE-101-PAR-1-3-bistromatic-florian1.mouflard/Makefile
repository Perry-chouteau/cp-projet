##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## do a makefile
##

SRC	=	change_base.c

NAME	=	./calc

DELETE	=	*~

all:	$(NAME)

$(NAME):	$(SRC)
	make -C lib/my all
	gcc -o $(NAME) $(SRC) -L ./lib/my -lmy -I ./include

clean:
	rm -f *.o

fclean:
	rm -f $(DELETE)
	make -C lib/my clean
	rm -f $(NAME)

re:	fclean all
