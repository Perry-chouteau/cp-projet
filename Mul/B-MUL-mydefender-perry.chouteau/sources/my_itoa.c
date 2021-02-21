/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** my_itoa.c
*/

#include "../includes/defender.h"

char *my_itoa(int n)
{
    char *str;
    int neg = 0;
    int len = 0;
    int i = 0;

    neg = (n < 0) ? 1: 0;
    n *= (n < 0) ? -1: 1;
    for (int cp_n = n; cp_n != 0; cp_n /= 10)
        len += 1;
    if (len == 0) {
        str = malloc(sizeof(char));
        str[0] = '0';
        return str;
    }
    str = malloc(sizeof(char) *(len + neg));
    str[0] = (neg == 1)? '-': ' ';
    for (; n != 0; len -= 1, n /= 10)
        str[neg + len - 1] = (n >= 10)? 48 + n % 10: 48 + n;
    return str;
}