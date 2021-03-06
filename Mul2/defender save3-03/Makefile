##
## EPITECH PROJECT, 2021
## antman
## File description:
## bootstrap
##

# program
NAME	=	my_defender

SRC =	sources/changes.c	\
		sources/defender.c	\
		sources/describe.c	\
		sources/destruct.c	\
		sources/draw.c	\
		sources/event.c	\
		sources/init.c

MAIN	=	sources/main.c

CFLAGS	=	-Wall -Wextra -g3

CPPFLAGS	=	-I lib/lib_my/includes -L lib/lib_my -lmy	\
				-I lib/lib_csfml/includes -L lib/lib_csfml -lcsfml

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
	make -C lib/lib_my/
	make -C lib/lib_csfml/
	$(CC) $(NAME) $(SRC) $(MAIN) $(CPPFLAGS) $(CFLAGS) $(CPPFLAGS_CSFML)

clean:
	make clean -C lib/lib_my/
	make clean -C lib/lib_csfml/
	rm -rf *~
	rm -rf *gc*
	rm -rf unit_tests

fclean:
	make fclean -C lib/lib_my/
	make fclean -C lib/lib_csfml/
	rm -rf $(NAME)
	rm -rf *gc*
	rm -rf a.out
	rm -rf $(OBJ)

re:
	make re -C lib/lib_my/
	make re -C lib/lib_csfml/
	$(CC) $(NAME) $(SRC) $(MAIN) $(CPPFLAGS) $(CFLAGS) $(CPPFLAGS_CSFML)

tests_run:
	$(CC) $(NAME_TEST) $(SRC_TEST) $(SRC) $(CPPFLAGS_TEST) $(CPPFLAGS_CSFML)
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: all	clean fclean re fclean tests_run