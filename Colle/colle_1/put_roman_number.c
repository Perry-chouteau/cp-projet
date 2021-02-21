/*
** EPITECH PROJECT, 2020
** put romain number 
** File description:
** write romain number with decimal number
*/

#include <unistd.h>
#include <stdio.h>
#include "lib/my/my.h"

int hundredone_to_thousand(int nb)
{
    if (nb <= 100 && nb > 1000)
        return nb;
    if ((nb >= 400 && nb < 500) || (nb >= 900 && nb < 1000))
            my_putchar('C');
    if (nb >= 399 && nb <= 899)
        my_putchar('D');
    for (;(nb > 99 && nb <= 399) || (nb > 599 && nb <= 899); nb -= 100)
        my_putchar('C');
    if (nb > 899)
        my_putchar('M');
    nb %= 100;
    return nb;
}

int eleven_to_hundred(int nb)
{
    if (nb <= 10 || nb > 100)
        return nb;
    if((nb >= 40 && nb < 50) || (nb >= 90 && nb < 100 ))
        my_putchar('X');
    if(nb >= 39 && nb <= 89)
        my_putchar('L');
    for (;(nb > 9 && nb <= 39) || (nb > 59 && nb <= 89); nb -= 10)
        my_putchar('X');
    if(nb > 89)
        my_putchar('C');
    nb %= 10;
    return nb;
}

void one_to_ten(int nb)
{
    if(nb <= 0 && nb >10 ) 
        return;
    if(nb == 4 || nb == 9)
        my_putchar('I');
    if(nb >= 4 && nb <= 8)
        my_putchar('V');
    for(;(nb > 0 && nb < 4) || (nb > 5 && nb < 9);nb -= 1)
        my_putchar('I');
    if(nb > 8)
        my_putchar('X');
}

void put_roman_nbr(int nb)
{
    if(nb == 0) {
        write(1,"nulla",6);
        return;
    }
    nb = hundredthousand_to_million(nb);
    nb = tenthousand_to_hundredthousand(nb);
    nb = thousand_to_tenthousand(nb);
    nb = hundredone_to_thousand(nb);
    nb = eleven_to_hundred(nb);
    one_to_ten(nb);
    write(1,"\n",1);
}

int main(int ac, char **av)
{
    int nb = atoi(av[1]);
    put_roman_nbr(nb);
    return 0;
}
