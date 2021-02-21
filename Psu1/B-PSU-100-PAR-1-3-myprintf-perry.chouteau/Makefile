##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compile/remove/create/move/all
##

CFLAGS =	-W -Wall -Wextra

all:	libmy.a

libmy.a:
	cd sources/ && make

clean:
	rm -rf *~
	cd includes/ && rm -rf *~
	cd sources/ && rm -rf *~

fclean: clean
	rm -rf libmy.a
	cd sources/ && make fclean

re: fclean all

.PHONY: all libmy.a clean fclean re
