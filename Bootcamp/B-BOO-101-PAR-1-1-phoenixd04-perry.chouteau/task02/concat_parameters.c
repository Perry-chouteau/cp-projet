/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd04-perry.chouteau
** File description:
** concat_parameters.c
*/

/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
** File description:
** my_putchar.c
*/

#include <unistd.h>
#include "phoenix.h"

char *concat_parameters(int ac, char **av)
{
    int sz;
    int k = 0;
    char *str;

    for (int i = 0; i < ac; i += 1) {
        for (int j = 0; av[i][j] != '\0'; j += 1)
            sz += 1;
        sz += 1;
    }
    str = malloc(sizeof(char) * sz);
    for(int i = 0; i < ac; i += 1) {
        if (i > 0) { 
            str[k] = '\n';
            k += 1;
        }
        for (int j = 0; av[i][j] != '\0'; j += 1, k += 1)
            str[k] = av[i][j];
    }
    str[k] = '\0';
    return str;
}