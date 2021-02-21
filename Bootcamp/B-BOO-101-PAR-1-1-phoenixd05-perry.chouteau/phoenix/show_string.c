/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd01-perry.chouteau
** File description:
** show_string.c
*/
#include <unistd.h>

int show_string(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 1);
    write(1, str, i);
    return 0;
}