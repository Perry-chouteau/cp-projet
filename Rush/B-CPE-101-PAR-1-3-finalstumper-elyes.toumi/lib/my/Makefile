##
## EPITECH PROJECT, 2020
## emacs
## File description:
## emacs
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = executable

all: $(NAME)

$(NAME): $(OBJ)
	ar rc libmy.a $(OBJ)
	cp my.h ../../include
	cp libmy.a ../
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
