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
    if (ac < 2 || ac > 3)
        return 84;
    return 0;
}

int init(int ac, char **av)
{

    return 0;
}