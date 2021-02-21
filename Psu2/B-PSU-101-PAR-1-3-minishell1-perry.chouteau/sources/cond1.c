/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** cond1.c
*/

#include "../includes/include.h"

void un_setenv(shell_t *sh, char **env)
{
    if (my_strcmp(sh->sharg.tab[0], "unsetenv") == 0) {
        my_printf("unsetenv\n");
        my_unsetenv(sh, env);
        sh->b_bool = 1;
    }
    if (my_strcmp(sh->sharg.tab[0], "setenv") == 0) {
        my_printf("setenv\n");
        my_setenv(sh, env);
        sh->b_bool = 1;
    }
}

void cd_env(shell_t *sh, char **env)
{
    if (my_strcmp(sh->sharg.tab[0], "cd") == 0) {
        my_cd(sh, env);
        sh->b_bool = 1;
    }
    if (my_strcmp(sh->sharg.tab[0], "env") == 0) {
        my_printf("env\n");
        my_env(sh, env);
        sh->b_bool = 1;
    }

}

void cond1(shell_t *sh, char **env)
{
    sh->b_bool = 0;
    if (sh->b_bool == 0) {
        cd_env(sh, env);
        un_setenv(sh, env);
    }
}