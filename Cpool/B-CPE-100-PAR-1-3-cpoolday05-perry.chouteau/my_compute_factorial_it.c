/*
** EPITECH PROJECT, 2020
** my_computer_factorial_it
** File description:
** give the factorial of number
*/

#include<stdio.h>

int my_compute_factorial_it (int nb)
{
    int temp = nb - 1;
    if(nb > 12)
        nb = 0;
    else if(nb > 0) {
        while(temp > 0){
            nb = nb * temp;
            temp -= 1;
        }
        return(nb);
    }   
    if(nb < 0)
        return(0);
    if nb == 0)
        return(1);
}
