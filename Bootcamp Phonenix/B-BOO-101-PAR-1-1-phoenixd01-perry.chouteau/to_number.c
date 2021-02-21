/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd01-perry.chouteau
** File description:
** to_number.c
*/

#include "include.h"

int to_number(char const *str)
{
    int i;
    int n = 1;
    int nb = 0;
    int e = 0;
    for (i = 0; str[i] == '-' || str[i] == '+'; i += 1)
        if (str[i] == '-')
            n *= -1;
    for (; str[i] >= '0' && str[i] <= '9'; i += 1) {
        e += 1;
        if ( e > 10)
            return 0;
        nb += (str[i] - 48);
        nb *= 10;
    }
    nb /= 10;
    nb *= n;
    return nb;
}
