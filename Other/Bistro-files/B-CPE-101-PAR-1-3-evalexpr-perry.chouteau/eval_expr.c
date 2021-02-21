/*
** EPITECH PROJECT, 2020
** eval expr
** File description:
** takes a string as parameter, which represents a mathematical expression,returns an int*/

#include "my.h"

int my_bracketlen (char *str, int sv_nb_bracket)
{   
    for (int i = 0; str[i] != '\0'; i += 1)
        if (str[i] == '(' || str[i] == ')')
            sv_nb_bracket += 1;
}

char *bracket (*str,)
{
    int i = 0;
    nb nb_bracket = my_bracketlen(str, );
    int begin_bracket = 0;
    int end_bracket = 0;

    for (i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == '(')
            begin_bracket = i;
        if (str[i] == ')') {
            str[end_bracket] = '@';
            end_bracket = i;
            i = begin_bracket + 1;
            for (int j = 0 ,str[i] = '@', str[end] = @; str[i] != ')'; i += 1, j = 0)
                str2[j] = str[i];
            i = 0;
        }
        printf ("str = %s\nstr2 = %s", str,str2);
    }
    return str2;
}

int eval_expr ( char const * str ) ;
{
    tab[3] = {0, 0, 0};
    char *calc = malloc(sizeof(char) * strlen)  ;
}

int main (int ac, char **av)
{
    if ( ac == 2) {
        my_put_nbr ( eval_expr ( av [1]) ) ;
        my_putchar ('\n') ;
        return (0) ;
    }
    return (84) ;
}
