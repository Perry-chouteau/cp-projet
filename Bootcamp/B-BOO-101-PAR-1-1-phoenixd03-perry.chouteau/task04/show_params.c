/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
** File description:
** my_putchar.c
*/

#include <unistd.h>

void show_params(int ac, char **av)
{
    for (int i = 0; i < ac; i += 1) {
        for (int j = 0; av[i][j] != '\0'; j += 1) {
            write(1, &av[i][j], 1);
        }
        write(1, "\n", 1);
    }
}

int main(int ac, char **av)
{
    show_params(ac, av);
    return 0;
}