/*
** EPITECH PROJECT, 2020
** my compute square root
** File description:
** compute square root
*/

#include "../includes/my.h"

int my_compute_square_root(int nb)
{
    int i;
    int res;

    for (i = 0; nb >= res; i += 1) {
        res = i * i;
        if (nb == res)
            return i;
    }
    return 0;
}
