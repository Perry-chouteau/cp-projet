##
## EPITECH PROJECT, 2020
## B-PSU-100-PAR-1-3-myls-perry.chouteau
## File description:
## Makefile
##

SRC_PUSHSWAP =	sources/swap_elem.c	\

SRC_TEST =	tests/swap_elem_test.c	\

SRC_PRINTF =	printf_dir/sources/my_printf.c	\
				printf_dir/sources/cond1.c	\
				printf_dir/sources/cond2.c	\
				printf_dir/sources/convert_printf.c	\
				printf_dir/sources/putchar_printf.c	\
				printf_dir/sources/putnbr_printf.c	\
				printf_dir/sources/putstr_printf.c	\
				printf_dir/sources/revstr_printf.c

SRC_LIB =	lib_dir/sources/my_swap.c	\
			lib_dir/sources/my_compute_power_rec.c	\
			lib_dir/sources/my_compute_square_root.c	\
			lib_dir/sources/my_find_prime_sup.c	\
			lib_dir/sources/my_getnbr.c	\
			lib_dir/sources/my_is_prime.c	\
			lib_dir/sources/my_isneg.c	\
			lib_dir/sources/my_put_nbr.c	\
			lib_dir/sources/my_putchar.c	\
			lib_dir/sources/my_putstr.c	\
			lib_dir/sources/my_revstr.c	\
			lib_dir/sources/my_showstr.c	\
			lib_dir/sources/my_sort_int_array.c	\
			lib_dir/sources/my_str_isalpha.c	\
			lib_dir/sources/my_str_islower.c	\
			lib_dir/sources/my_str_isnum.c	\
			lib_dir/sources/my_str_isprintable.c	\
			lib_dir/sources/my_str_isupper.c	\
			lib_dir/sources/my_strcapitalize.c	\
			lib_dir/sources/my_strcat.c	\
			lib_dir/sources/my_strcmp.c	\
			lib_dir/sources/my_strcpy.c	\
			lib_dir/sources/my_strlen.c	\
			lib_dir/sources/my_strlowcase.c	\
			lib_dir/sources/my_strncat.c	\
			lib_dir/sources/my_strncmp.c	\
			lib_dir/sources/my_strncpy.c	\
			lib_dir/sources/my_strstr.c	\
			lib_dir/sources/my_strupcase.c	\
			lib_dir/sources/my_showmen.c

OBJ =	$(SRC_PRINTF:.c=.o) $(SRC_LIB:.c=.o) $(SRC_PUSHSWAP:.c=.o)

OBJ_TEST =	$(SRC_PRINTF:.c=.o) $(SRC_LIB:.c=.o) $(SRC_PUSHSWAP:.c=.o) $(SRC_TEST:.c=.o)

NAME = push_swap

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Wextra -g3

test:	$(OBJ_TEST)
	gcc -o $(NAME) $(OBJ_TEST) -Wall -Wextra -l criterion --coverage

clean:
	rm -rf *~
	cd sources/ && rm -rf *~
	cd printf_dir/sources/ && rm -rf *~
	cd lib_dir/sources/ && rm -rf *~

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)
	cd doc && rm -rf *.txt

re: fclean all

retest: fclean test