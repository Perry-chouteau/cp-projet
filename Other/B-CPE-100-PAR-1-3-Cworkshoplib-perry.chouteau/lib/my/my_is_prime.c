/*
** EPITECH PROJECT, 2020
** my is prime
** File description:
** say if the number is prime or not
*/

int my_is_prime(int nb)
{
    int i;
    
    if(nb < 2 || (nb % 2) == 0)
        return 0;
    if(nb == 2)
        return 1;
    for(i = 3; (i * i) <= nb; i += 2)
        if((nb % i) == 0)
            return 0;
    return 1;
} 
