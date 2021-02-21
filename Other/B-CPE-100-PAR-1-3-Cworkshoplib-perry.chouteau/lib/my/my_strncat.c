/*
** EPITECH PROJECT, 2020
** my str cat
** File description:
** my str cat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = m_strlen(dest);

    for (int j= 0; src[j] != '\0' && j < nb; i += 1, j += 1)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}
