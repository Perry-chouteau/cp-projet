/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** my_strstr.c
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int i;
    int j;
    int sz;

    for (sz = 0; to_find[sz];sz += 1);
    for (i = 0; str[i]; i += 1)
        if (str[i] ==  to_find[0])
            for (int j = 0;str[i + j] ==  to_find[0 + j]; j += 1) {
                if (j == sz)
                    return (&str[i]);
            }
            return NULL;
}