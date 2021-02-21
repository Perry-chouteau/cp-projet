##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC_PRINTF =	printf_dir/sources/my_printf.c	\
				printf_dir/sources/cond1.c	\
				printf_dir/sources/cond2.c	\
\
				printf_dir/sources/convert_printf.c	\
				printf_dir/sources/putnbr_printf.c	\
				printf_dir/sources/putchar_printf.c	\
				printf_dir/sources/putstr_printf.c	\
				printf_dir/sources/revstr_printf.c

SRC =	lib_dir/sources/my_atof.c	\
\
		sources/principal.c	\
\
		sources/set_map.c	\
		sources/init.c	\
		sources/sprite.c	\
\
		sources/event.c	\
		sources/changes.c	\
		sources/csfml_linklist/csfml_linklist.c	\
		sources/csfml_linklist/csfml_main_linklist.c	\
		sources/csfml_linklist/csfml_data_linklist.c	\
\
		sources/destruct.c

OBJ = $(SRC:.c=.o) $(SRC_PRINTF:.c=.o)

NAME = my_defender

SVFL = *~

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-audio -l csfml-window -l csfml-system -Wall -Wextra -g3

clean:
	rm -rf $(SVFL)

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all

launch: re
	./$(NAME)

.PHONY: all clean fclean re launch lvl1 lvl2 lvl3 lvl4 lvl5
