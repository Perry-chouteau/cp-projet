##
## EPITECH PROJECT, 2020
## B-MUL-200-PAR-2-1
## File description:
## Makefile
##

SRC =	sources/my_compute_power_rec.c	\
		sources/my_compute_square_root.c	\
		sources/my_sqrt.c	\
		sources/my_is_prime.c	\
		sources/my_swap.c	\
		sources/my_find_prime_sup.c	\
\
		sources/my_atof.c	\
		sources/my_isneg.c	\
		sources/my_str_isnum.c	\
		sources/my_sort_int_array.c	\
		sources/my_getnbr.c	\
\
		sources/my_itoa.c	\
		sources/my_put_nbr.c	\
		sources/my_putchar.c	\
		sources/my_putstr.c	\
		sources/my_strlen.c	\
		sources/my_showstr.c	\
\
		sources/my_str_isalpha.c	\
		sources/my_str_isprintable.c	\
		sources/my_strcmp.c	\
		sources/my_strncmp.c	\
		sources/my_revstr.c	\
		sources/my_str_islower.c	\
		sources/my_str_isupper.c	\
		sources/my_strcapitalize.c	\
		sources/my_strlowcase.c	\
		sources/my_strupcase.c	\
		sources/my_strcpy.c	\
		sources/my_strcat.c	\
		sources/my_strncat.c	\
		sources/my_strncpy.c	\
		sources/my_strstr.c	\
		sources/my_showmen.c	\
\
		sources/main_linklist.c	\
		sources/linklist.c

OBJ =	$(SRC:.c=.o)

NAME =	liblib.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	-rm -f $(OBJ)
	-rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re