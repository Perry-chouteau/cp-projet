/*
** EPITECH PROJECT, 2020
** my_putnbr
** File description:
** write number
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    int begin;
    int end;
    char b;

    if (nb < 0) {
        nb *= -1;
        write(1, "-", 1);
        my_put_nbr(nb);
    }
    else {
        end = nb % 10;
        begin = nb / 10;
        if (begin != 0)
            my_put_nbr(begin);
        b = end + '0';
        write(1, &b, 1);
    }
    return 0;
}