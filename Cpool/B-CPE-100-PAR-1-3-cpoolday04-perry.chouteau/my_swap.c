/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** swap two number
*/

#include<stdio.h>

void my_swap (int *a, int *b)
{
    int c=*a;
    int d=*b;
    *a = d;
    *b = c;
}
