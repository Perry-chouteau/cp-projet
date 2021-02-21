/*
** EPITECH PROJECT, 2020
** my str cat
** File description:
** my str cat
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int j;
    
    for (j = 0; src[j] != '\0'; j += 1)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}
