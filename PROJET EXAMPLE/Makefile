##
## EPITECH PROJECT, 2021
## antman
## File description:
## bootstrap
##

# program
NAME	=	my_project

SRC =	sources/project.c	\
		sources/init.c	\

MAIN	=	sources/main.c

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I lib_dir/includes/ -L lib_dir/ -l lib	\
				-I printf_dir/includes/ -L printf_dir/ -l printf	\
				-I csfml_dir/includes/ -L csfml_dir/ -l csfml

CPPFLAGS_CSFML	=	-l csfml-graphics -l csfml-audio -l csfml-window -l csfml-system

OBJ	=	$(SRC:.c=.o)	\
		$(MAIN:.c=.o)

# tests
NAME_TEST	=	unit_tests

SRC_TEST	=	tests/tests.c	\
				tests/tests_error.c

CPPFLAGS_TEST	=	--coverage -l criterion -I include/

# compilation
CC =	gcc -o

#rules
all:	$(OBJ)
	make -C lib_dir/
	make -C printf_dir/
	make -C csfml_dir/
	$(CC) $(NAME) $(SRC) $(MAIN) $(CPPFLAGS) $(CFLAGS)

clean:
	make clean -C lib_dir/
	make clean -C printf_dir/
	make clean -C csfml_dir/
	rm -f *~
	rm -f *gc*
	rm -f unit_tests

fclean:
	make fclean -C lib_dir/
	make fclean -C printf_dir/
	make fclean -C csfml_dir/
	rm -f $(NAME)
	rm -f *gc*
	rm -f a.out
	rm -f $(OBJ)

re:	fclean all
	make re -C lib_dir/
	make re -C printf_dir/
	make re -C csfml_dir/

tests_run:
	$(CC) $(NAME_TEST) $(SRC_TEST) $(SRC) $(CPPFLAGS_TEST)
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: all clean fclean re tests_run