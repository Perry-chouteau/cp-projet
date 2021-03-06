/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** function
*/

#include "my.h"

int fractals(char **av);

int error(int ac, char **av)
{
    if (ac != 4)
        return 84;
    if (my_strlen(av[2]) != my_strlen(av[3]))
        return 84;
    for (int i = 0; av[2][i] != '\0'; i += 1) {
        if (av[2][i] == '@' && av[3][i] != '@')
            return 84; 
        if (av[3][i] == '@' && av[2][i] != '@')
            return 84;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (error(ac, av) == 84)
        return 84;
    fractals(av);
    return 0;
}
