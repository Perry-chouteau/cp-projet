/*
** EPITECH PROJECT, 2020
** matchstick preshot
** File description:
** my_error.c
*/

#include "../includes/include.h"

void describe(void)
{
    my_printf("USAGE\n");
    my_printf("\t./example file.txt n1 n2\n");
    my_printf("\n");
    my_printf("DESCRIPTION\n");
    my_printf("");
    exit(0);
}

int my_error(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        describe();
        return 1;
    } else if ( ac != 3 || my_str_isnum(av[1]) == 0 ||
    my_str_isnum(av[2]) == 0 || my_getnbr(av[1]) < 2 ||
    my_getnbr(av[1]) >= 100 || my_getnbr(av[2]) <= 0) {
        return 84;
    } else
        return 0;
}
