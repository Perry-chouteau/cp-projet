/*
** EPITECH PROJECT, 2020
** my str is num
** File description:
** say if the string is a number
*/

#include "../includes/my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    return (1);
}