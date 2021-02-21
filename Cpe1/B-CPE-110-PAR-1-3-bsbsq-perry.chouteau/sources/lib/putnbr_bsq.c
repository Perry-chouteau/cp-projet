/*
** EPITECH PROJECT, 2020
** putnbr_printf.c
** File description:
** putnbr_printf
*/

#include "../../includes/bs_bsq.h"
#include <unistd.h>

void putnbr_bsq(int nb)
{
    int begin;
    int end;
    int res;

    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
    }
    if (nb >= 10)
        putnbr_bsq(nb / 10);
    nb %= 10;
    nb += '0';
    write(1, &nb, 1);
    return ;
}



