/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** say if the number is positive or negative for each number given
*/

#include "my.h"

int my_isneg(int nb)
{
    if (nb<0) {
        my_putchar('N');
        return (-1);
    }
    if (nb >= 0) {
        my_putchar ('P');
        return (1);
    }
}
