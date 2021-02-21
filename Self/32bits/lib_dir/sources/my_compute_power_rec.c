/*
** EPITECH PROJECT, 2020
** my compute power rec
** File description:
** compute power rec
*/

#include "../includes/my.h"

int my_compute_power_rec(int nb, int power)
{
    int res = nb;

    if (power == 0)
        return 1;
    else if (power > 0) {
        if (nb < 0 && (power % 2) == 2)
            res *= -1;
        for (int i = 1; i < power; i += 1)
            res *= nb;
    } else
        return 0;
    return res;
}