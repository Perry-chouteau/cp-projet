/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/include.h"

int main(int ac, char **av)
{
    s_t *s = malloc(sizeof(s_t));
    init(s, ac, av);
    if (my_error(ac, av) == 84)
        return 84;
    if (my_error(ac, av) == 1)
        return 0;
    return 0;
}