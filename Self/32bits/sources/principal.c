/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/include.h"

int main(int ac, char **av)
{
    switch (my_error(ac, av)) {
        case 1: return 0;
        case 2: return 84;
        default: break;
    }
    if (my_error(ac, av) == 84)
        return 84;

    if (ac == 2 && my_strcmp(av[1], "host") == 0)
        return term1(ac, av);
    else if (ac == 3 && my_strcmp(av[1], "guest") == 0 && my_str_isnum(av[2]))
        return term2(ac, av);
    else
        return 84;
    return 0;
}