/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** Write a function that displays, one-by-one, the characters of a string.
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
