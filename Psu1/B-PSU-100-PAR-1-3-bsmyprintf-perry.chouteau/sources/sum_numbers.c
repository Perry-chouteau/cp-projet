/*
** EPITECH PROJECT, 2020
** sum_numbers.c
** File description:
** sum_numbers.c
*/
#include <stdarg.h>

int sum_numbers(int n , ...)
{
    va_list list;
    int sum_nbr= 0;
    
    va_start(list, n);
    for (int i = 0; i != n; i += 1) 
        sum_nbr += va_arg(list, int);
    va_end(list);
    return sum_nbr;
}
