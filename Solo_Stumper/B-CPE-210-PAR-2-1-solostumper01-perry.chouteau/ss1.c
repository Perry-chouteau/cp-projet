/*
** EPITECH PROJECT, 2020
** Solo_Stumper
** File description:
** ss1.c
*/

#include "unistd.h"
#include "stdlib.h"

int main(int ac, char **av)
{
    int sz, i = 0, b = 0;
    if (av[1] == NULL) {
        write(1, "\n", 1);
        return 0;
    }
    for (sz = 0; av[1][sz] != '\0'; sz += 1);
    for (; i < sz; i += 1) {
        if (av[1][i] != ' ' && av[1][i] != '\t') {
            write(1, &av[1][i], 1), b = 1;
            continue;
        }
        if (b == 1 && (av[1][i + 1] != ' ' || av[1][i + 1] != '\t')) {
            if (av[1][i + 1] && av[1][i + 1] != ' ' && av[1][i + 1] != '\t')
                write(1, " ", 1), b = 0;
            continue;
        }
    }
    write(1, "\n", 1);
    return 0;
}