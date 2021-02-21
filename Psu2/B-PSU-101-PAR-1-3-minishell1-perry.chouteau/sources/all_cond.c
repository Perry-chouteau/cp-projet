/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** all_cond.c
*/

#include "../includes/include.h"

void all_cond(shell_t *sh, char **env)
{
    int i;

    cond1(sh, env);
    i = cond2(sh, env, i);
    i = cond3(sh, env, i);
}