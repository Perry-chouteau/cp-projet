/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** displays if is negative with N and P for possitive or null
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar(80);
       else
           my_putchar(78);

    return (0);
}
