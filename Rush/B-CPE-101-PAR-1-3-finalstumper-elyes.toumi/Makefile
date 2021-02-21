##
## EPITECH PROJECT, 2020
## emacs
## File description:
## emacs
##

SRC = main.c \
	result_compare.c \
	rush3.c 

OBJ = $(SRC:.c=.o)

NAME = rush3

all: $(NAME)

$(NAME): $(SRC) $(NAME) $(OBJ)
	@(cd lib/my && $(MAKE))
	gcc -Wall -Wextra -Werror $(SRC) -c -Iinclude/ && gcc *.o -Llib/ -o $(NAME) -lmy 
clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
