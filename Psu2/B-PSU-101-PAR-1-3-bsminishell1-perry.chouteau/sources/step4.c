/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-bsminishell1-perry.chouteau
** File description:
** step4.c
*/

#include "../includes/include.h"

s_t arg_in_tab(char **arg)
{
    s_t s;
    int temp;

    s.n = 0;
    s.args = 1;
    for (int i = 0;arg[1][i]; i += 1)
        if (arg[1][i] == ' ')
            s.args += 1;
    s.tab = malloc(sizeof(char *) * (s.args + 1));
    for (int i = 0, j = 0; i < s.args; i += 1, j += 1) {
        for (temp = 0; arg[1][j + temp] != ' ' && arg[1][j + temp];   \
        temp += 1);
        s.tab[i] = malloc(sizeof(char) * temp);
        for (int k = 0; k < temp; k += 1, j += 1)
            s.tab[i][k] = arg[1][j];
    }
    s.tab[s.args] = NULL;
    return s;
}

int print_info(s_t s)
{
    my_printf("Program name: %s\n", s.tab[0]);
    my_printf("Nb args: %i\n", (s.args - 1));
    my_printf("PID: %i\n", getpid());
    my_printf("Child PID: %i\n", s.pid);
    return 0;
}

int main(int ac, char **av, char **env)
{
    if (my_error(ac, av) == 84)
        return 84;
    pid_t pid = fork();
    s_t s = arg_in_tab(av);
    int return_execve = 0, status = 0;

    if (pid == -1)
        my_printf("Fork Error\n");
    else if (pid == 0)
        return_execve = execve(s.tab[0], s.tab, env);
    else
        wait(&status);
    s.pid = pid;
    print_info(s);
    my_printf("Program terminated.\n");
    if (return_execve == -1)
        my_printf("Status: Segmentation fault\n");
    else
        my_printf("Status: OK\n");
    return 0;
}