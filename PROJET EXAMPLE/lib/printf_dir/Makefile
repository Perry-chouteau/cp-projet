##
## EPITECH PROJECT, 2020
## B-MUL-200-PAR-2-1
## File description:
## Makefile
##

SRC	=	sources/my_printf.c	\
		sources/cond1.c	\
		sources/cond2.c	\
		sources/convert_printf.c	\
		sources/putchar_printf.c	\
		sources/putnbr_printf.c	\
		sources/putstr_printf.c	\
		sources/revstr_printf.c

OBJ =	$(SRC:.c=.o)

NAME =	libprintf.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	-rm -f $(OBJ)
	-rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re