/*
** EPITECH PROJECT, 2020
** putchar_bsq.c
** File description:
** putchar_bsq
*/

#include "../../includes/bs_bsq.h"
#include <unistd.h>

void putchar_bsq(char c)
{
    write(1, &c, 1);
}
