/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-bsminishell1-perry.chouteau
** File description:
** step2.c
*/

#include "../includes/include.h"

int main(int ac, char **av, char **env)
{
    execve("ls", av, env);
    return 0;
}