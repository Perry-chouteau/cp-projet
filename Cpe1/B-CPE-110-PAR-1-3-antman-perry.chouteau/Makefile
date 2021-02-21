##
## EPITECH PROJECT, 2020
## B-CPE-110-PAR-1-3-pushswap-perry.chouteau
## File description:
## Makefile
##

SRC_ZIP =	sources/init.c	\
			sources/error.c	\
			sources/src_ant/antman.c	\
			sources/src_ant/ant.c

SRC_UNZIP =	sources/init.c	\
			sources/error.c	\
			sources/src_giant/giantman.c	\
			sources/src_giant/giant.c

SRC_PRINTF =	printf_dir/sources/my_printf.c	\
				printf_dir/sources/cond1.c	\
				printf_dir/sources/cond2.c	\
\
				printf_dir/sources/convert_printf.c	\
				printf_dir/sources/putnbr_printf.c	\
				printf_dir/sources/putchar_printf.c	\
				printf_dir/sources/putstr_printf.c	\
				printf_dir/sources/revstr_printf.c

SRC_LIB =	lib_dir/sources/my_compute_power_rec.c	\
			lib_dir/sources/my_compute_square_root.c	\
			lib_dir/sources/my_sqrt.c	\
			lib_dir/sources/my_is_prime.c	\
			lib_dir/sources/my_put_nbr.c	\
			lib_dir/sources/my_getnbr.c	\
			lib_dir/sources/my_putchar.c	\
			lib_dir/sources/my_putstr.c	\
			lib_dir/sources/my_strlen.c	\
			lib_dir/sources/my_showstr.c	\
\
			lib_dir/sources/my_str_isalpha.c	\
			lib_dir/sources/my_str_isprintable.c	\
			lib_dir/sources/my_strcmp.c	\
			lib_dir/sources/my_strncmp.c	\
			lib_dir/sources/my_revstr.c	\
			lib_dir/sources/my_str_islower.c	\
			lib_dir/sources/my_str_isupper.c	\
			lib_dir/sources/my_strcapitalize.c	\
			lib_dir/sources/my_strlowcase.c	\
			lib_dir/sources/my_strupcase.c	\
			lib_dir/sources/my_strcpy.c	\
			lib_dir/sources/my_strcat.c	\
			lib_dir/sources/my_strncat.c	\
			lib_dir/sources/my_strncpy.c	\
			lib_dir/sources/my_strstr.c	\
			lib_dir/sources/my_showmen.c

SRC_TEST = tests/*.c

OBJ =	$(SRC_PRINTF:.c=.o)	\
		$(SRC_LIB:.c=.o)

OBJ_ZIP = $(SRC_ZIP:.c=.o)

OBJ_UNZIP = $(SRC_UNZIP:.c=.o)

NAME_ZIP = antman/antman

NAME_UNZIP = giantman/giantman

all:	$(OBJ_ZIP) $(OBJ_UNZIP) $(OBJ)
	gcc -o $(NAME_ZIP) $(OBJ) $(OBJ_ZIP) -Wall -Wextra
	gcc -o $(NAME_UNZIP) $(OBJ) $(OBJ_UNZIP) -Wall -Wextra

clean:
	rm -rf *~
	cd sources/ && rm -rf *~
	cd printf_dir/sources/ && rm -rf *~
	cd lib_dir/sources/ && rm -rf *~
	rm -rf *.gcda && rm -rf *.gcno
	rm -rf $(NAME_ZIP)


fclean: clean
	rm -rf $(OBJ)
	rm -rf $(OBJ_ZIP)
	rm -rf $(OBJ_UNZIP)

re: fclean all

tests_run:	fclean $(OBJ_ZIP) $(OBJ_ZIP)
	gcc -o $(NAME_TEST) $(OBJ_ZIP) $(SRC_TEST) --coverage -l criterion
	./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches
