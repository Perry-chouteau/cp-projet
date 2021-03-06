##
## EPITECH PROJECT, 2021
## antman
## File description:
## bootstrap
##

NAME	=	my_defender

NAME_TEST	=	unit_tests

SRC	=	src/defender.c	\
		src/init_menu.c	\
		src/init_object.c	\
		src/init_sound.c	\
		src/init_structure.c	\
		src/event.c	\
		src/draw.c	\
		src/destroy.c	\
		src/error_handling.c	\
		src/menu_parallax.c

MAIN	=	src/main.c

OBJ	=	$(SRC:.c=.o)	\
		$(MAIN:.c=.o)

SRC_TEST	=	tests/tests.c	\
				tests/tests_error.c

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I include/ -L lib/my_csfml/ -lmy_csfml -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

CPPFLAGS_TEST	=	--coverage -lcriterion -I include/

CC =	gcc

all: $(NAME)

$(NAME):	$(OBJ)
	make -C lib/my_csfml/
	$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS)

clean:
	make clean -C lib/my_csfml/
	rm -f *~
	rm -f *gc*
	rm -f unit_tests

fclean: clean
	make fclean -C lib/my_csfml
	rm -f $(NAME)
	rm -f *gc*
	rm -f a.out
	rm -f $(OBJ)

re:	fclean all

tests_run:	re
	$(CC) $(NAME_TEST) $(SRC_TEST) $(SRC) $(CPPFLAGS_TEST) -g3
	./$(NAME_TEST)
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY: all $(NAME) clean fclean re tests_run bonus