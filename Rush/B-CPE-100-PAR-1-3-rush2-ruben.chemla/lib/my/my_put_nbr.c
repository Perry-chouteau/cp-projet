/*
** EPITECH PROJECT, 2020
** my_print_digits
** File description:
** displays all the digits
*/

#include <unistd.h>

int my_putchar(char c);

int my_put_nbr(int nb)
{
    if(nb < 0) {
        write(1,"-",1);
        nb = nb * (-1);
    }
    
    if (nb == -2147483648) {
        write(1,"2147483648",13);
        return (0);
    }

    if (nb >= 10) 
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return (0);    
}
