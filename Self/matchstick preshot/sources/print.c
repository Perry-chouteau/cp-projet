/*
** EPITECH PROJECT, 2020
** matchstick preshot
** File description:
** print.c
*/

#include "../includes/include.h"

int print(char **tab)
{
    for (int i = 0; tab[i] != NULL; i += 1) {
        for (int j = 0; tab[i][j]; j += 1)
            my_printf("%c", tab[i][j]);
        my_printf("\n");
    }
    write (1, "\n", 1);
}
