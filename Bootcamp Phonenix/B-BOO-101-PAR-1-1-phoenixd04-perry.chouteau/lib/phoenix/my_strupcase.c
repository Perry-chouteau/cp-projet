/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** my_strupcase.c
*/

#include <stdlib.h>

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        if ( str[i] > 'a' && str[i] < 'z')
            str[i] = (str[i] - 32);
    return str;
}