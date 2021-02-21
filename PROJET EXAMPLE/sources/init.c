/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** init.c
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
    }
    return 0;
}

s_t *init(s_t *s, int ac, char **av)
{

    s->av = av;
    s->ac = (ac - 1);
    return s;
}