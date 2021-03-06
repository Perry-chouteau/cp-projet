/*
** EPITECH PROJECT, 2020
** my str is lower
** File description:
** say if a string is lower
*/

#include "../includes/my.h"

int my_str_islower(char const *str)
{
    for (int i = 0;str[i] != '\0'; i += 1)
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
    return 1;
}