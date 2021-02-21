##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compile/remove/create/move/all
##

SRC =	sources/disp_stdarg.c	\
	sources/sum_numbers.c	\
	sources/sum_strings_length.c

OBJ =	$(SRC:.c=.o)

CFLAGS +=	-L sources/ 
CFLAGS +=	-I./includes

NAME = test_bsprintf

ALL:	libmy.a

libmy.a:
	cd sources/ && $(MAKE)

clean:
	rm -f $(OBJ)
	cd tests/ && make clean

fclean:	clean
	cd tests/ && rm -f $(NAME)

re:	fclean all

unit_tests:
	cd tests/ && $(MAKE)

run_tests:
	cd tests/ && ./$(NAME)

.PHONY: all clean fclean re
