/*
** EPITECH PROJECT, 2020
** my str is num
** File description:
** say if the string is a number
*/

#include "../includes/my.h"

int my_str_isnum(char const *str)
{
    int	i;

    for (i = 0; str[i]; i += 1)
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '.')
            return 0;
    return 1;
}