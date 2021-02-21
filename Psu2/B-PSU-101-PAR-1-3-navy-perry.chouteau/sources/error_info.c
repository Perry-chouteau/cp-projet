/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-navy-perry.chouteau
** File description:
** error_info.c
*/

#include "../includes/navy.h"

int info_prog(void)
{
    my_printf("USAGE:\n");
    my_printf("\t·player 1:\t[./navy pos1]\n");
    my_printf("\t·player 2:\t[./navy 'player1 value' pos2]\n");
    my_printf("\n");
    my_printf("DESCRIPTION:\n");
    my_printf("\t·This is a (Terminal) version of battleship\n");
    my_printf("\t                                 ═────────═\n");
    return 0;
}

int error(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0 &&   \
    my_strlen(av[1]) == 2) {
        return (info_prog());
    }
    if (ac == 2 && my_strcmp(av[1], "pos1") == 0 &&   \
    my_strlen(av[1]) == 4)
        return 1;
    if (ac == 3 && my_str_isnum(av[1]) == 1 &&   \
    my_strcmp(av[2], "pos2") == 0 && my_strlen(av[2]) == 4)
        return 2;
    return 84;
}