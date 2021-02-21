/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-navy-perry.chouteau
** File description:
** connection.c
*/

#include "../includes/navy.h"

global_t g;

void p1_connect(int signum, siginfo_t *sig_info, void *texte)
{
    my_printf("\n\nenemy connected\n\n");
    g.pid = sig_info->si_pid;
    kill(g.pid, SIGUSR1);
    return ;
}

void p2_connect(int signum, siginfo_t *sig_info, void *texte)
{
    my_printf("successfully connected\n\n");
    return ;
}

int co_p1(char **av)
{
    navy_t nv;
    int my_pid = getpid();
    struct sigaction sa;

    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = &p1_connect;
    sigaction(SIGUSR1, &sa, NULL);
    my_printf("my_pid: %i\n", my_pid);
    my_printf("waiting for enemy connection...");
    if (usleep(30000000) ==  0)
        return 84;
    return 0;

    
}

int co_p2(char **av)
{
    navy_t nv;
    int my_pid = getpid();
    struct sigaction sa;

    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = &p2_connect;
    sigaction(SIGUSR1, &sa, NULL);
    my_printf("my_pid: %i\n", my_pid);
    kill(my_getnbr(av[1]), SIGUSR1);
    if (usleep(5000000) ==  0)
        return 84;
    return 0;
}

int my_connexion(char **av, int who)
{
    switch (who) {
        case 0:
            return 0;
        case 84:
            return 84;
        case 1:
            return (co_p1(av));
        case 2:
            return (co_p2(av));
    }
    return 0;
}