/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Cette fonction permet de comparer deux chaînes de caractères
** et de savoir si la première est inférieure, égale ou supérieure à la seconde.
*/

#include "../includes/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int v1 = 0;
    int v2 = 0;
    int i;
    int j;

    if (n < 1)
        return 0;
    for (i = 0; s1[i] != '\0'; i += 1);
    for (j = 0; s2[j] != '\0'; j += 1);
    if (n > i || n > j)
        return 0;
    for (int i = 0; i < n; i += 1)
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    return 0;
}