##
## EPITECH PROJECT, 2021
## antman
## File description:
## bootstrap
##

# program
NAME	=	my_defender

SRC =	project_dir/sources/changes.c	\
		project_dir/sources/defender.c	\
		project_dir/sources/describe.c	\
		project_dir/sources/destruct.c	\
		project_dir/sources/draw.c	\
		project_dir/sources/event.c	\
		project_dir/sources/init.c

MAIN	=	project_dir/sources/main.c

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I lib_dir/includes/ -L lib_dir/ -l lib	\
				-I csfml_dir/includes/ -L csfml_dir/ -l csfml

CPPFLAGS_CSFML	=	-l csfml-graphics -l csfml-audio -l csfml-window -l csfml-system

OBJ	=	$(SRC:.c=.o)	\
		$(MAIN:.c=.o)

# tests
NAME_TEST	=	unit_tests

SRC_TEST	=	project_dir/tests/tests.c	\
				project_dir/tests/tests_error.c

CPPFLAGS_TEST	=	--coverage -l criterion -I include/

# compilation
CC =	gcc -o

#rules
all:	$(OBJ)
	make -C lib_dir/
	make -C csfml_dir/
	$(CC) $(NAME) $(SRC) $(MAIN) $(CPPFLAGS) $(CFLAGS) $(CPPFLAGS_CSFML)

clean:
	make clean -C lib_dir/
	make clean -C csfml_dir/
	rm -f *~
	rm -f *gc*
	rm -f unit_tests

fclean:
	make fclean -C lib_dir/
	make fclean -C csfml_dir/
	rm -f $(NAME)
	rm -f *gc*
	rm -f a.out
	rm -f $(OBJ)

re:
	make re -C lib_dir/
	make re -C csfml_dir/
	$(CC) $(NAME) $(SRC) $(MAIN) $(CPPFLAGS) $(CFLAGS) $(CPPFLAGS_CSFML)

tests_run:
	$(CC) $(NAME_TEST) $(SRC_TEST) $(SRC) $(CPPFLAGS_TEST) $(CPPFLAGS_CSFML)
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

launch:re
	./$(NAME)

.PHONY: all	\
		clean	\
		fclean	\
		re \
		launch	\
		fclean	\
		tests_run	\
		fclean