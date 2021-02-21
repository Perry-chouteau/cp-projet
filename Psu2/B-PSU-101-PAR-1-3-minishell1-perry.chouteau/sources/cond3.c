/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** cond2.c
*/

#include "../includes/include.h"

void exec_prog(shell_t *sh, char **env)
{
    int r_exe = 0;
    int status = 0;

    if (fork() == 0)
        r_exe = execve(sh->sharg.tab[0], sh->sharg.tab, env);
    else
        wait(&status);
    if (r_exe == -1)
        exit(0);
}

int cond3(shell_t *sh, char **env, int i)
{
    if (sh->b_bool == 0)
        if (access(sh->sharg.tab[0], X_OK) == F_OK) {
            exec_prog(sh, env);
            sh->b_bool = 1;
        }
    else if (sh->path[i] == NULL)
        write(2, "Command not found.\n", 19);
    return i;
}