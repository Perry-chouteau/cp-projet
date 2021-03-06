##
## EPITECH PROJECT, 2020
## B-MUL-200-PAR-2-1
## File description:
## Makefile
##

SRC	=	sources/def_line_pos.c	\
		sources/equadra_lib.c	\
		sources/intersection_cone.c	\
		sources/intersection_cylindre.c	\
		sources/intersection_sphere.c	\
		sources/fp_x.c	\
		sources/f_x.c

OBJ =	$(SRC:.c=.o)

NAME =	libmath.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	-rm -f $(OBJ)
	-rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re