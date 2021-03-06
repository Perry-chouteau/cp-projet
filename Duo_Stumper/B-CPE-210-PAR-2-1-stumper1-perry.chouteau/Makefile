##
## EPITECH PROJECT, 2021
## fractals
## File description:
## Makefile
##

SRC = 	./sources/fractals.c	\
	./sources/main.c

OBJ =	$(SRC:.c=.o)

NAME = fractals

CC =	gcc

MAKE =	make

CFLAGS =	-I./include/ -Wall -Wextra -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(MAKE) -C lib/my/
	@$(CC) -o $(NAME) $(OBJ) -L./lib/my/ -lmy
clean:
	@$(MAKE) clean -C lib/my
	@rm -f $(OBJ)
	@rm -f vgcore*
	@rm -f *~

fclean: clean
	@$(MAKE) fclean -C lib/my
	@rm -f $(MAKE)
re: fclean all

debug:		$(OBJ)
	@$(MAKE) -C lib/my
	@gcc -o $(NAME) $(OBJ) -L./lib/my/ -g3 -lmy
	@rm -f $(OBJ)
	@rm -f vgcore*
	@rm -f *~
