/*
** EPITECH PROJECT, 2020
** B-MUL-100-PAR-1-3-mydefender-perry.chouteau
** File description:
** set_map.c
*/

#include "../includes/include.h"

void describe1(void)
{
    write(1, "_______________________________________________\n", 49);
    write(1, "DESCRIPTION\n\n", 14);
    write(1, "goal:\t\t eliminate all enemy\n", 29);
    write(1, "help:\t\t check the ”Readme.md”\n", 35);
    write(1, "_______________________________________________\n", 49);

}

void describe2(void)
{
    write(1, "USAGE\n\n", 8);
    write(1, "example:\t./my_defender\t", 24);
    write(1, "_______________________________________________\n", 49);
}

int describe(void)
{
    describe1();
    describe2();
    return 1;
}