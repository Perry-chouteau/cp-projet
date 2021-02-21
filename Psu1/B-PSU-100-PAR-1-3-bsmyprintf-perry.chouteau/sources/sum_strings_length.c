/*
** EPITECH PROJECT, 2020
** sum_strings_length.c
** File description:
** sum_strings_length.c
*/

#include <stdarg.h>

int my_sum_strlen(char *str)
{
    int j;

    for (j = 0; str[j] != '\0'; j += 1);
    return j;
}

int sum_strings_length(int n , ...)
{
    va_list list;
    int sum_str_l = 0;
    
    va_start(list, n);
    for (int i = 0; i != n; i += 1)
        sum_str_l += my_sum_strlen(va_arg(list, char*));
    va_end(list);
    return sum_str_l;
}







