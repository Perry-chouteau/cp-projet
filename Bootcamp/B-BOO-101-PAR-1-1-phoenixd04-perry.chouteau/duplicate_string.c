/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd04-perry.chouteau
** File description:
** duplicate_string.c
*/

#include "includes/phoenix.h"
#include <stdio.h>


#include "includes/phoenix.h"
#include <stdio.h>

char *duplicate_string(char const *src)
{
    int len;
    int n;
    for (len = 0; src[len]; len += 1);
    char *dest = malloc(sizeof(char) * (len + 1));
    for(n = 0; n < len; n += 1)
        dest[n] = src[n];
    dest[n] = '\0';
    return dest;
}