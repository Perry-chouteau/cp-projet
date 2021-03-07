/*
** EPITECH PROJECT, 2020
** my str cat
** File description:
** my str cat
*/

#include "../includes/my.h"

char *my_strcat(char *dest, char const *src)
{
    int len;
    int i;

    for (len = 0; dest[len]; len += 1);
    for (i = 1;src[i]; i += 1)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return (dest);
}