##
## EPITECH PROJECT, 2020
## source Makefile
## File description:
## source Makefile
##

SRC =	disp_stdarg.c   \
        sum_numbers.c   \
        sum_strings_length.c

OBJ =   $(SRC:.c=.o)

NAME = test

SAVEFILE =	*~

ALL:     $(NAME)

$(NAME):        $(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f $(SAVEFILE)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
