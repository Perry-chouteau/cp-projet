/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd01-perry.chouteau
** File description:
** x.c
*/

#include "include.h"

char *reverse_string(char *str)
{
    int i = 0;
    int j = 0;
    char sv;

    for (i = 0; str[i] != '\0'; i += 1);
    i -= 1;
    for (;j <= i; j += 1, i -= 1) {
        sv = str[i];
        str[i] = str[j];
        str[j] = sv;
    }
    return str;
}