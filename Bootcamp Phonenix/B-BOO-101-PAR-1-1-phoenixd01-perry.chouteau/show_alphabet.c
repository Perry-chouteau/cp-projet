/*
** EPITECH PROJECT, 2020
** day_01
** File description:
** show_alphabet.c
*/

#include "include.h"

int show_alphabet(void)
{
    for (char alpha = 'a'; alpha <= 'z'; alpha += 1)
        write(1, &alpha, 1);
    return 0;
}