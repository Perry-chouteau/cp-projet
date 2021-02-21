/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** swap two number
*/

#include<stdio.h>

void my_swap (char *a, char *b)
{
    char c = *a;
    char d = *b;

    *a = d;
    *b = c;
}
