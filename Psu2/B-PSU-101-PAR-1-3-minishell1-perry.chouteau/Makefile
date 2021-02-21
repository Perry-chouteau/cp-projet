##
## EPITECH PROJECT, 2020
## B-CPE-110-PAR-1-3-pushswap-perry.chouteau
## File description:
## Makefile
##

SRC =	sources/init.c	\
		sources/principal.c	\
		sources/all_cond.c	\
		sources/error_handling.c	\
		sources/cd_un_set_env.c	\
		sources/cond1.c	\
		sources/cond2.c	\
		sources/cond3.c

SRC_MATH =	math_dir/sources/intersection_shere.c	\
		math_dir/sources/intersection_cylindre.c	\
		math_dir/sources/intersection_cone.c	\
		math_dir/sources/equadra_lib.c	\
		math_dir/sources/def_line_pos.c	\
\
		math_dir/sources/f_x.c	\
		math_dir/sources/fp_x.c

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
			lib_dir/sources/my_swap.c	\
			lib_dir/sources/my_find_prime_sup.c	\
\
			lib_dir/sources/my_atof.c	\
			lib_dir/sources/my_isneg.c	\
			lib_dir/sources/my_str_isnum.c	\
			lib_dir/sources/my_sort_int_array.c	\
			lib_dir/sources/my_getnbr.c	\
\
			lib_dir/sources/my_put_nbr.c	\
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
			lib_dir/sources/my_showmen.c	\
			lib_dir/sources/my_termline.c	\
			lib_dir/sources/my_del_mult_space.c

SRC_TEST = tests/*.c

OBJ =	$(SRC_LIB:.c=.o)	\
		$(SRC_PRINTF:.c=.o)	\
		$(SRC:.c=.o)

NAME = mysh

NAME1 = stp1
NAME2 = stp2
NAME3 = stp3
NAME4 = stp4

NAME_TEST = unit_tests

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Wextra -g3

clean:
	rm -rf *~
	cd sources/ && rm -rf *~
	cd printf_dir/sources/ && rm -rf *~
	cd lib_dir/sources/ && rm -rf *~
	rm -rf *.gcda && rm -rf *.gcno
	rm -rf $(NAME)
	rm -rf unit_tests

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(EXE)

re: fclean all

tests_run:	fclean $(OBJ)
	gcc -o $(NAME_TEST) $(OBJ) $(SRC_TEST) --coverage -l criterion
	./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches
