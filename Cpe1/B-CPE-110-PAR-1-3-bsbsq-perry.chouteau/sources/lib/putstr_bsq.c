/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** say character of a string, one by one
*/

#include "../../includes/bs_bsq.h"
#include <unistd.h>

void putstr_bsq(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1);
    write(1, str, i);
}
