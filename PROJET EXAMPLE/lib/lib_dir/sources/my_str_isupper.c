/*
** EPITECH PROJECT, 2020
** my str is upper
** File description:
** say if a string is upper
*/

#include "../includes/my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0;str[i] != '\0'; i += 1)
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
    return 1;
}
