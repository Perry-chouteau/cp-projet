##
## EPITECH PROJECT, 2020
## B-PSU-100-PAR-1-3-myls-perry.chouteau
## File description:
## Makefile
##

SRC =	sources/main_ls.c	\
		sources/ls_delivery.c	\
		sources/ls_reverse.c	\
		printf_dir/sources/my_printf.c	\
		printf_dir/sources/cond1.c	\
		printf_dir/sources/cond2.c	\
		printf_dir/sources/convert_printf.c	\
		printf_dir/sources/putchar_printf.c	\
		printf_dir/sources/putnbr_printf.c	\
		printf_dir/sources/putstr_printf.c	\
		printf_dir/sources/revstr_printf.c

OBJ =	$(SRC:.c=.o)

NAME = my_ls

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Wextra

clean:
	rm -rf *~
	cd sources/ && rm -rf *~
	cd printf_dir/sources/ && rm -rf *~

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(EXE)

re: fclean all
