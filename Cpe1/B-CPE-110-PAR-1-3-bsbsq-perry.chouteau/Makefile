##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## src / obj / [re]
##

SRC =	main.c	\
	sources/fs_open_file.c	\
	sources/fs_understand_return_of_read.c	\
	sources/fs_cat_500_bytes.c	\
	sources/fs_cat_x_bytes.c	\
	sources/fs_print_first_line.c	\
	sources/fs_get_number_from_first_line.c	\
	sources/array_1d_print_chars.c	\
	sources/array_1d_print_ints.c	\
	sources/lib/putstr_bsq.c	\
	sources/lib/putnbr_bsq.c	\
	sources/lib/putchar_bsq.c	\
	sources/lib/getnbr_bsq.c	\
	sources/lib/strlen_bsq.c

OBJ = $(SRC:.c=.o)

NAME = bs_bsq

SVFL = *~

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf $(SVFL)
	cd includes/ && rm -rf $(SVFL)
	cd sources/ && rm -rf $(SVFL)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

.PHONY: all clean re
