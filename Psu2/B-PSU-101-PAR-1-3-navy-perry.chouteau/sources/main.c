/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-navy-perry.chouteau
** File description:
** main.c
*/

#include "../includes/navy.h"

int main(int ac, char **av)
{
    int who = error(ac, av);
    if (my_connexion(av, who) == 84)
        return 84;
    if (my_map(av, who) == 84)
        return 84;
    return 0;
}