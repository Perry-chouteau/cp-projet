/*
** EPITECH PROJECT, 2020
** my str is printable
** File description:
** my str is printable returns True if all characters in the string \
** are printable or the string is empty. If not, it returns False.
*/

#include "../includes/my.h"

int my_str_isprintable(char const *str)
{
    int	i = 0;

    for (;str[i] != '\0'; i += 1)
        if (str[i] >=  0 || str[i] <=  31 || str[i] == 127)
            return 0;
    return 1;
}