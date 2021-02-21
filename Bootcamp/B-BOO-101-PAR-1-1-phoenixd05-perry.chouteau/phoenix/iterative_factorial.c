/*
** EPITECH PROJECT, 2020
** Bootcamp
** File description:
** iterative_factorial.c
*/

#include <unistd.h>
#include <stdlib.h>

int iterative_factorial(int nb)
{
    int res = 1;

    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    if (nb > 12)
        return 0;
    for (nb; nb > 0;nb -= 1)
        res *= nb;
    return res;
}