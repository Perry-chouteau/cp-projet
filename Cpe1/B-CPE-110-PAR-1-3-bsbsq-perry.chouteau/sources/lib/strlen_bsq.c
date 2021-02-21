/*
** EPITECH PROJECT, 2020
** strlen_bsq.c
** File description:
** strlen_bsq.c
*/

#include "../../includes/bs_bsq.h"

int strlen_bsq(char *str)
{
    int i;

    for(; str[i] != '\0'; i += 1);
    return i;
}
