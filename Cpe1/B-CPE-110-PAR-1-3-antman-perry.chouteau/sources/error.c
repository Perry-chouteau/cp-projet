/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-antman-perry.chouteau
** File description:
** error.c
*/

#include "../includes/antman.h"

int my_error(int ac, char **av)
{
    if (ac != 3)
        return 84;
    if (my_getnbr(av[2]) < 1 || my_getnbr(av[2]) > 3)
        return 84;
    return 0;
}
