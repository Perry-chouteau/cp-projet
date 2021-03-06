/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** say if the number is positive or negative for each number given
*/

#include "../includes/my.h"

void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb < 0)
        return 1;
    else
        return 0;
}
