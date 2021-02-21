##
## EPITECH PROJECT, 2020
## test Makefile
## File description:
## test makefile
##

SRC =	tests_disp_stdarg.c	\
	tests_sum_numbers.c	\
	tests_strings_length.c


NAME =	test_bsprintf

all:	$(NAME)

$(NAME):	$(NAME) $(SRC)
	gcc -o $(NAME) $(SRC) -L../sources/ -I../includes/ -lmy --coverage -lcriterion

clean:
	rm -f *.gcno && rm -f *.gcda 

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
