/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** say character of a string,one by one
*/

#include <unistd.h>

char my_putchar(char c);

char my_putstr(char const *str)
{
    int i = 0;
    while(str[i] > 0) {
        my_putchar(str[i]);
        i += 1;
    }
}
