/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Cette fonction permet de comparer deux chaînes de caractères
*/

#include "../includes/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int v1 = 0;
    int v2 = 0;
    int i;
    int j;

    for (i = 0; s1[i] != '\0'; i += 1);
    for (j = 0; s2[j] != '\0'; j += 1);
    for (int i = 0; s1[i] && s2[i]; i += 1)
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    return 0;
}
