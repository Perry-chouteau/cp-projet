/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swaps the content of two integers
*/

#include <unistd.h>

void my_putchar(char c);

void my_swap(int *a,int *b)
{
    int c;

    c = *b;
    *b = *a;
    *a = c;
}
