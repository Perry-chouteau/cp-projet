/*
** EPITECH PROJECT, 2020
** find prime sup
** File description:
** find prime sup
*/

#include "../includes/my.h"

int my_find_prime_sup(int nb)
{
    nb += 1;
    if (nb > 2 && nb % 2 == 0)
        nb += 1;
    for (; my_is_prime(nb) != 1; nb += 2);
    return nb;
}