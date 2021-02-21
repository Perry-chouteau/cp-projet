/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** cond1.c
*/

#include "../includes/include.h"

void combinate(shell_t *sh, int i)
{
    int len = 0;
    int k = 0;

    for (int j = 0; sh->path[i][j] != '\0'; k += 1, j += 1)
        sh->exe_path[k] = sh->path[i][j];
    for (int j = 0; sh->sharg.tab[0][j] != '\0'; k += 1, j += 1)
        sh->exe_path[k] = sh->sharg.tab[0][j];
    sh->exe_path[k] = '\0';
}

void exec_bin(shell_t *sh, char **env)
{
    int r_exe = 0;
    int status = fork();

    if (status == 0)
        r_exe = execve(sh->exe_path, sh->sharg.tab, env);
    else
        wait(&status);
    if (r_exe == -1)
        exit(0);
}

int cond2(shell_t *sh, char **env, int i)
{
    if (sh->b_bool == 0)
        for (i = 0; sh->path[i] != NULL; i++) {
            combinate(sh, i);
            if (access( sh->exe_path, X_OK) == F_OK){
                exec_bin(sh, env);
                sh->b_bool = 1;
                break;
            }
        }
    return i;
}