##
## EPITECH PROJECT, 2020
## B-BOO-101-PAR-1-1-phoenixd04-perry.chouteau
## File description:
## Makefile
##

##
## EPITECH PROJECT, 2020
## B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
## File description:
## Makefile
##

SRC_PHNIX = ../lib/phoenix/is_prime_number.c	\
			../lib/phoenix/iterative_factorial.c	\
			../lib/phoenix/my_putchar.c	\
			../lib/phoenix/my_strcapitalize.c	\
			../lib/phoenix/my_strcpy.c	\
			../lib/phoenix/my_strncmp.c	\
			../lib/phoenix/recursive_power.c	\
			../lib/phoenix/my_strstr.c	\
			../lib/phoenix/my_strupcase.c	\
			../lib/phoenix/show_string.c	\

SRC =	concat_parameters.c	\
		main.c	\

OBJ = 	$(SRC:.c=.o)	\
		$(SRC_PHNIX:.c=.o)

NAME = concat_parameters

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -rf *~

fclean: clean
	rm -rf $(OBJ)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
