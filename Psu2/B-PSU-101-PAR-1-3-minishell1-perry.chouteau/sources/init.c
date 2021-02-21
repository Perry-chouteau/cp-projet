/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-pushswap-perry.chouteau
** File description:
** init.c
*/

#include "../includes/include.h"

void init_localhost(shell_t *sh)
{
    char *name = "perry.chouteau@epitech.eu\0";

    sh->name = malloc(sizeof(char) * 100);
    for (int i = 0; name[i]; i += 1)
        sh->name[i] = name[i];
}

void init_path(shell_t *sh, char **env)
{
    int temp = 0;
    int sz = 0;
    char *path = NULL;
    bool err = 0;

    sh->path_sz = 1;
    for (int i = 0; env[i] != NULL; i += 1)
        if (my_strncmp(env[i], "PATH=", 5) == 0) {
            temp = i;
            err = 1;
        }
    if (err == 0)
        exit(84);
    for (sz = 0; env[temp][5 + sz]; sz += 1);
    path = malloc(sizeof(char) * (sz + 1));
    for (int i = 0; env[temp][5 + i]; i += 1)
        path[i] = env[temp][5 + i];
    for (int i = 0; path[i]; i += 1)
        if (path[i] == ':')
            sh->path_sz += 1;
    sh->path = malloc(sizeof(char *) * (sh->path_sz + 1));
    for (int i = 0, j = 0; i < sh->path_sz; i += 1, j += 1) {
        for (temp = 0; path[j + temp] != ':' && path[j + temp];   \
        temp += 1);
        sh->path[i] = malloc(sizeof(char) * (temp + 2));
        for (int k = 0; k < temp; k += 1, j += 1)
            sh->path[i][k] = path[j];
        sh->path[i][temp] = '/';
        sh->path[i][temp + 1] = '\0';
    }
    sh->path[sh->path_sz] = NULL;
}

void init_my_env(shell_t *sh, char **env)
{
    int len = 0;

    for (len = 0; env[len] != NULL; len += 1);
    sh->env.def_env = malloc(sizeof(char *) * (len + 1));
    for (int i; i < len; i += 1)
        sh->env.def_env[i] = env[i];
    sh->env.def_env[len] = NULL;
}

void init(shell_t *sh, char **env)
{
    init_localhost(sh);
    init_path(sh, env);
    init_my_env(sh, env);
    signal(SIGINT, SIG_IGN);
    signal(SIGTSTP, SIG_IGN);
    sh->exe_path = malloc(sizeof(char) * 200);
    sh->cd.cwd_sz = 500;
}