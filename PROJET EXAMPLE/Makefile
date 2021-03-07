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

CPPFLAGS	=	-I lib/lib_dir/includes/ -L lib/lib_dir/ -l lib	\
				-I lib/printf_dir/includes/ -L lib/printf_dir/ -l printf	\
				-I lib/csfml_dir/includes/ -L lib/csfml_dir/ -l csfml

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
	make -C lib/lib_dir/
	make -C lib/printf_dir/
	make -C lib/csfml_dir/
	$(CC) $(NAME) $(SRC) $(MAIN) $(CPPFLAGS) $(CFLAGS)

clean:
	make clean -C lib/lib_dir/
	make clean -C lib/printf_dir/
	make clean -C lib/csfml_dir/
	rm -f *~
	rm -f *gc*
	rm -f unit_tests

fclean:
	make fclean -C lib/lib_dir/
	make fclean -C lib/printf_dir/
	make fclean -C lib/csfml_dir/
	rm -f $(NAME)
	rm -f *gc*
	rm -f a.out
	rm -f $(OBJ)

re:	fclean all
	make re -C lib/lib_dir/
	make re -C lib/printf_dir/
	make re -C lib/csfml_dir/

tests_run:
	$(CC) $(NAME_TEST) $(SRC_TEST) $(SRC) $(CPPFLAGS_TEST)
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: all clean fclean re tests_run