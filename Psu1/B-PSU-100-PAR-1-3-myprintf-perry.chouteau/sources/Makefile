##
## EPITECH PROJECT, 2020
## sources Makefile
## File description:
## Makefile
##

SRC =   my_printf.c	\
	putchar_printf.c	\
	putstr_printf.c	\
	putnbr_printf.c	\
	convert_printf.c	\
	revstr_printf.c	\
	cond1.c \
	cond2.c

OBJ =	$(SRC:.c=.o)

EXE = a.out

all:		$(OBJ)
	ar rc libmy.a $(OBJ)
	cp -P libmy.a ../

clean:
	rm -rf $(OBJ)
	rm -rf $(EXE)

fclean: clean
	rm -rf libmy.a

re: fclean all

main: $(OBJ)
	gcc -o exe_cute $(OBJ) main.c
	./exe_cute
