/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** say character of a string, one by one
*/

#include "../includes/my_printf.h"

void putstr_printf(char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        putchar_printf(str[i]);
}

