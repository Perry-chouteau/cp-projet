/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** say character of a string,one by one
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    int i = 0;

    for (; str[i] != "\0"; i += 1);
    write(1,str,i);
    return 0;
}
