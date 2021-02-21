/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-bsminishell1-perry.chouteau
** File description:
** principal.c
*/

#include "../includes/include.h"

shellarg_t arg_in_tab(char *arg)
{
    shellarg_t s;
    int temp;

    s.args = 1;
    for (int i = 0;arg[i]; i += 1)
        if (arg[i] == ' ')
            s.args += 1;
    s.tab = malloc(sizeof(char *) * (s.args + 1));
    for (int i = 0, j = 0 ; i < s.args; i += 1, j += 1) {
        for (temp = 0; arg[j + temp] != ' ' && arg[j + temp];   \
        temp += 1);
        s.tab[i] = malloc(sizeof(char) * temp);
        for (int k = 0; k < temp; k += 1, j += 1)
            s.tab[i][k] = arg[j];
    }
    s.tab[s.args] = NULL;
    return s;
}

void my_free(shell_t *sh)
{
    for (int i = 0; i < sh->sharg.args; i += 1)
        free(sh->sharg.tab[i]);
    free(sh->sharg.tab);
    for (int i = 0; sh->path[i] != NULL; i += 1)
        free(sh->path[i]);
    free(sh->path);
    free(sh->exe_path);
}

int main(int ac, char **av, char **env)
{
    shell_t *sh = malloc(sizeof(shell_t));
    bool n = 0;

    my_error(ac, av, env);
    init(sh, env);
    for (int b = 1; ; n = 1) {
        if (isatty(0) == 1) {
            my_printf(BG_BLACK FT_BLUE UNDER_LINE);
            my_printf("[%s]$"RESET_ALL" ", sh->name);
        }
        sh->sharg = arg_in_tab(del_mult_space(my_termline()));
        all_cond(sh, env);
    }
    return 0;
}