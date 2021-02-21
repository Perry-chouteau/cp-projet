/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Cette fonction permet de comparer deux chaînes de caractères
*/

#include "../includes/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i += 1);
    return (s1[i] - s2[i]);
}