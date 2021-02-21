/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd01-perry.chouteau
** File description:
** show_number.c
*/

#include "include.h"

void my_put_unité(int i)
{
    char c = (i + 48);
    write(1, &c, 1);
}

int show_number(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return 0;
    }
    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * (-1);
    }
    if (nb >= 10)
        show_number(nb / 10);
    my_put_unité(nb % 10);
    return 0;
}