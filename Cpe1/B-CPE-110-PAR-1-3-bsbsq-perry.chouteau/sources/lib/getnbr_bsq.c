/*
** EPITECH PROJECT, 2020
** getnbr_bsq.c
** File description:
** getnbr_bsq
*/

#include "../../includes/bs_bsq.h"

int getnbr_bsq(char *str)
{
    int nb = 0;
    int neg = 1;
    int i = 0;
    for (; str[i] == '+' || str[i] == '-'; i += 1)
        if (str[i] == '-')
            neg *= -1;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb *= 10;
            nb += str[i] - '0';
            i += 1;
        }
        else
            return (nb * neg);
    }
    return (nb * neg);
}
