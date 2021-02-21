/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-mydefender-perry.chouteau
** File description:
** set_map.c
*/

#include "../includes/defender.h"

void describe1(void)
{
    write(1, "──────────────────────────────────────────────────────\
────────────\n", 199);
    write(1, "DESCRIPTION\n\n", 14);
    write(1, "goal:\t\t dodge all enemy\n", 26);
    write(1, "help:\t\t check the ”Readme.md”\n", 35);
    write(1, "──────────────────────────────────────────────────────\
────────────\n", 199);
    write(1, "USAGE\n\n", 8);
}

void describe2(void)
{
    write(1, "example:\t./my_defender\t", 23);
    write(1, "──────────────────────────────────────────────────────\
────────────\n", 199);
}

int set_map(game_t *def, int ac, char **av)
{
    return 0;
}