/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** init.c
*/

#include "../includes/linked_list.h"

void describe(void)
{
    write(1, "USAGE\n", 6);
    write(1, "\t./link_list\n", 12);
    write(1, "\n", 1);
    write(1, "DESCRIPTION\n", 12);
    write(1, "\n", 1);
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