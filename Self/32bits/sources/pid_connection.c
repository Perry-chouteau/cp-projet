/*
** EPITECH PROJECT, 2020
** 32bits
** File description:
** pid_connection.c
*/

#include "../includes/include.h"

int static_co(pid_t info_si_pid)
{
    static int pid2;
    if (info_si_pid > 0)
        pid2 = info_si_pid;
    return pid2;
}

void p1_connect(int signum, siginfo_t *sig_info, void *texte)
{
    my_printf("guest connected\n\n");
    static_co(sig_info->si_pid);
    kill(sig_info->si_pid, SIGUSR1);
    return ;
}

int co_host(_32bit_t *bit32)
{
    my_printf("You are the host\n");
    bit32->pid1 = getpid();
    my_printf("and your pid is %i\n", bit32->pid1);

    bit32->sa1.sa_sigaction = &p1_connect;
    sigaction(SIGUSR1, &bit32->sa1, NULL);

    if (usleep(10000000) == 0) {
        write(2, "Time out\n", 9);
        return 84;
    }
    bit32->pid2 = static_co(-1);
}

/*  p2 V | p1 ^  */

void p2_connect(int signum, siginfo_t *sig_info, void *texte)
{
    int i = 0;
    my_printf("host connected\n\n");
    return ;
}

int co_guest(_32bit_t *bit32)
{
    my_printf("You are the guest\n");
    bit32->pid2 = getpid();
    my_printf("and your pid is %i\n", bit32->pid2);

    bit32->sa1.sa_sigaction = &p2_connect;
    sigaction(SIGUSR1, &bit32->sa1, NULL);

    kill(bit32->pid1, SIGUSR1);
    if (usleep(10000000) == 0) {
        write(2, "Time out\n", 9);
        return 84;
    }
}