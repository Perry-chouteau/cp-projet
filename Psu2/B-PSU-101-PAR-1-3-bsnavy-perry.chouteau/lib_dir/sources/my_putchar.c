/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** write one charactere
*/

#include "../includes/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
