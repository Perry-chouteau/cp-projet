/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/struct.h"

int main(int ac, char **av)
{
    s_t s = init(ac, av);
    if (my_error(ac, av) == 84)
        return 84;
    else if (my_error(ac, av) == 1)
        return 0;
    printf("%.9f\n", my_sqrt(6));
    printf("%.9f\n", sqrt(6.0));
    return 0;
}