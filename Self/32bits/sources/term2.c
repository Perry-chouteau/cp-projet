/*
** EPITECH PROJECT, 2020
** 32bits
** File description:
** term2.c
*/

#include "../includes/include.h"

int term2(int ac, char **av)
{
    _32bit_t *bit32 = malloc(sizeof(_32bit_t));

    bit32->pid1 = my_getnbr(av[2]);

    bit32->sa1.sa_flags = SA_SIGINFO;
    bit32->sa2.sa_flags = SA_SIGINFO;
    if (co_guest(bit32) == 84)
        return 84;
    if (keep_int(bit32) == 84)
        return 84;
    return 0;
}