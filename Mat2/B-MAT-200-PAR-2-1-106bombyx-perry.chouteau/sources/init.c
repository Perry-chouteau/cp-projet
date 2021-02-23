/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** init.c
*/

#include "../includes/include.h"

int describe(void)
{
    my_printf("USAGE\n");
    my_printf("\t./example file.txt n1 n2\n");
    my_printf("\n");
    my_printf("DESCRIPTION\n");
    my_printf("");
    return 1;
}

int my_error(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        return describe();
    if (ac < 3 || ac > 4)
        return 84;
    if (ac == 4 && atof(av[2]) > atof(av[3]))
        return 84;
    return 0;
}

int init(s_t *s, int ac, char **av)
{
    s->n = atof(av[1]);
    if (ac > 2)
        s->k = atof(av[2]);
    if (ac > 3)
        s->l = atof(av[3]);
}