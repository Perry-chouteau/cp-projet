/*
** EPITECH PROJECT, 2020
**  my put roman number 
** File description:
** put roman number part 2
*/
#include <unistd.h>

int thousand_to_tenthousand(int nb)
{
    if(nb <= 1000 || nb > 10000)
        return nb;
    if((nb == 4000 && nb < 5000) || (nb == 9000 && nb < 10000))
        my_putchar('M');
    if(nb >= 3999 && nb <= 8999)
        write(1,"V*",2);
    for (;(nb > 999 && nb <= 3999) || (nb > 5999 && nb <= 8999); nb -= 1000)
        my_putchar('M');
    if(nb > 8999)
        write(1,"X*",2);
    nb %= 1000;
    return nb;
}

int tenthousand_to_hundredthousand(int nb)
{
    if(nb <= 10000 || nb > 100000)
        return nb;
    if((nb == 40000 && nb < 50000) || (nb == 90000 && nb < 100000))
        write(1,"X*",2);
    if(nb >= 39999 && nb <= 89999)
        write(1,"L*",2);
    for (;(nb > 9999 && nb <= 39999) || (nb > 59999 && nb <= 89999); nb -= 10000)
        write(1,"X*",2);
    if(nb > 89999)
        write(1,"C*",2);
    nb %= 10000;
    return nb;
}

int hundredthousand_to_million(int nb)
{
    if(nb <= 100000 || nb > 1000000)
        return nb;
    if((nb == 400000 && nb < 500000) || (nb == 900000 && nb < 1000000))
        write(1,"C*",2);
    if(nb >= 399999 && nb <= 899999)
        write(1,"D*",2);
    for (;(nb > 99999 && nb <= 399999) || (nb > 599999 && nb <= 899999); nb -= 100000)
        my_putchar(1,"C*",2);
    if(nb > 899999)
        write(1,"M*",2);
    nb %= 100000;
    return nb;
    
}
