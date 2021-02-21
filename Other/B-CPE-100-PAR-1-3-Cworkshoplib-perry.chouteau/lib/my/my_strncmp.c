/*
** EPITECH PROJECT, 2020
** my strncmp
** File description:
** Comparer 2 string et exprime si la 1st est inf, égale ou sup à la 2nd.
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n <= 0)
        return 0;
    for (; s1[i] != '\0' && s2[i] != '\0' && n > 0; i += 1, n += 1) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i = i + 1;
        n--;
    }
}
