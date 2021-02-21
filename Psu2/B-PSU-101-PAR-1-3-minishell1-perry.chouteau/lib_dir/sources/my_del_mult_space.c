/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** my_del_mult_space.c
*/

#include "../includes/my.h"

int sz_of_del_mult_space(int sz, char *str)
{
    for (sz = 0; str[sz] != '\0'; sz += 1);
    for (;str[sz - 1] == ' ' || \
    str[sz - 1] == '\n' || str[sz - 1] == '\t'; \
    sz -= 1);
    return sz;
}

char *del_mult_space(char *str)
{
    int sz, i = 0, j = 0;
    char *str2;
    if (str == NULL)
        return str;
    sz = sz_of_del_mult_space(sz, str);
    for (; str[i] == ' '; i += 1);
    for (str2 = malloc(sizeof(char) * (sz + 1)); i < sz; i += 1) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && i < sz)
            str2[j++] =  str[i];
        else if (str[i + 1] != ' ' && str[i + 1] != '\t' &&   \
        str[i + 1] != '\n' && str[i + 1] && i < sz)
            str2[j++] =  str[i];
        }
    str2[i + 1] = '\0';
    return str2;
}