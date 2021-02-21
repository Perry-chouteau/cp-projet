/*
** EPITECH PROJECT, 2020
** my is prime
** File description:
** say if the number is prime or not
*/

#include "../includes/my.h"

int my_is_prime(int nb)
{
    int i = 3;

    if (nb == 2)
        return 1;
    else if (nb < 2 || nb % 2 == 0)
        return 0;
    for (; i * i <= nb; i += 2) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}