/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-bsminishell1-perry.chouteau
** File description:
** step1.c
*/

#include "../includes/include.h"

int main(int ac, char **av, char **env)
{
    for (int i = 0; env[i]; i += 1)
        my_printf("%s\n", env[i]);
    return 0;
}