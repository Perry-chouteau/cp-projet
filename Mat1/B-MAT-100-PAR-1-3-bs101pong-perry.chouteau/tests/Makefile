##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## tests Makefile
##

SRC =	tests_ex1.c	
##	tests_ex2.c	\
	tests_ex3.c	\
	tests_ex4.c	\
	tests_ex5.c	\
	tests_ex6.c	\
	tests_ex7.c	\
	tests_ex8.c

NAME =	exe_cute

all:	$(NAME)

$(NAME):	$(NAME) $(SRC)
	gcc -o $(NAME) $(SRC) -L../sources/ -I ../includes/ -lmy --coverage -lcriterion

clean:
	rm -f *~
	rm -f *.gcno && rm -f *.gcda

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

