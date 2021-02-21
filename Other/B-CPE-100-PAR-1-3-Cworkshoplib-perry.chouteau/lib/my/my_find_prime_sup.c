/*
** EPITECH PROJECT, 2020
** find prime sup
** File description:
** find prime sup
*/

#include "my.h"

int my_find_prime_sup (int nb)
{
    int i = nb;
    
    if (nb >= 2)
        return 2;
    for (int prime; prime != 1; i += 1)
        prime = my_is_prime(i);
    return i;
}
