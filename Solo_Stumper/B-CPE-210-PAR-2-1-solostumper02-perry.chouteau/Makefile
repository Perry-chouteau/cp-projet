##
## EPITECH PROJECT, 2020
## Solo_Stumper
## File description:
## Makefile
##

SRC =	ss2.c

SRC_TEST = ss2.c	\
		tests/test.c

NAME = palindrome

NAME_TEST = unit_tests

all:
	gcc -o $(NAME) $(SRC)

clean:
	rm -rf *~

fclean: clean
	rm -rf  $(NAME)

re: fclean all

.PHONY: all clean fclean re tests_run