/*
** EPITECH PROJECT, 2020
** 32bits
** File description:
** term1.c
*/

#include "../includes/include.h"

int term1(int ac, char **av)
{
    _32bit_t *bit32 = malloc(sizeof(_32bit_t));

    bit32->sa1.sa_flags = SA_SIGINFO;
    bit32->sa2.sa_flags = SA_SIGINFO;
    if (co_host(bit32) == 84)
        return 84;
    if (send_int(bit32) == 84)
        return 84;
    return 0;
}