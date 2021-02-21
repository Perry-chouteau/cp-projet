/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd01-perry.chouteau
** File description:
** show_combinations.c
*/

#include "include.h"

void my_putstr(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i += 1);
}

void my_put_unités(int i)
{
    char c = (i + 48);
    write(1, &c, 1);
}

int show_combinations(void)
{
    int i;
    int j;
    int k;
    for (k = 0; k < 8; k += 1)
        for (j = (k + 1); j < 9; j += 1)
            for (i = (j + 1); i < 10; i += 1) {
                my_put_unités(k);
                my_put_unités(j);
                my_put_unités(i);
                if (k != 7 || j != 8 || i != 9)
                    write (1, ", ", 2);
            }
    return 0;
}