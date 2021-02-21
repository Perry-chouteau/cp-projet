/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
** File description:
** my_putchar.c
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}