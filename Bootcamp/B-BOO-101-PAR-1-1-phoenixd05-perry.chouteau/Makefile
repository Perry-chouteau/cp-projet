##
## EPITECH PROJECT, 2020
## B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
## File description:
## Makefile
##

SRC_PHNX =	phoenix/my_putchar.c	\
			phoenix/iterative_factorial.c	\
			phoenix/my_strcpy.c	\
			phoenix/my_strstr.c	\
			phoenix/my_strncmp.c	\
			phoenix/my_strcmp.c	\
			phoenix/my_str_isnum.c	\
			phoenix/my_strcapitalize.c	\
			phoenix/recursive_power.c	\
			phoenix/show_string.c	\
			phoenix/to_number.c

SRC_STAR =	my_star.c	\
			star1.c	\
			starp.c

OBJ = 	$(SRC_PHNX:.c=.o)	\
		$(SRC_STAR:.c=.o)

NAME = star

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -W -Wall -Wextra

clean:
	rm -rf *~

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
