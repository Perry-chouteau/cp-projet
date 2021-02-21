/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-minishell1-perry.chouteau
** File description:
** un_set_env.c
*/

#include "../includes/include.h"

void my_cd(shell_t *sh, char **env)
{
    int i = 0;
    int j = 0;

    sh->cd.cwd = malloc(sizeof(char) * sh->cd.cwd_sz);
    if (sh->sharg.tab[1] == NULL) {
        getcwd(sh->cd.cwd, sh->cd.cwd_sz);
        for (; sh->cd.cwd[i] != '\0' && j < 3; i += 1)
            if (sh->cd.cwd[i] == '/')
                j += 1;
        if (j == 3) {
            sh->cd.cwd[i - 1] = '\0';
            if (access(sh->cd.cwd, F_OK) == 0)
                chdir(sh->cd.cwd);
        }
        else
            write(2, "no such file or directory\n", 26);
    } else if (access(sh->sharg.tab[1], F_OK) != 0)
        write(2, "no such file or directory\n", 26);
}

void my_env(shell_t *sh, char **env)
{
    for (int i; sh->env.def_env[i] != NULL; i += 1)
        my_printf("%s", sh->env.def_env[i]);
    return ;
}

void my_setenv(shell_t *sh, char **env)
{
    return;
}

void my_unsetenv(shell_t *sh, char **env)
{
    return;
}
