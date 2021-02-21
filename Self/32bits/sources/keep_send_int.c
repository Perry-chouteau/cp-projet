/*
** EPITECH PROJECT, 2020
** 32bits
** File description:
** keep_send_int.c
*/

#include "../includes/include.h"

int _bit32(int add)
{
    static int i;
    static int nb;

    if (add == 3) {
        i = 0;
        nb = 0;
        return 0;
    }
    if (add == -1)
        return nb;
    nb += (add << i);
    i += 1;
    return 0;
}

void less_int(int signum, siginfo_t *sig_info, void *texte)
{
    _bit32(0);
    return ;
}

void more_int(int signum, siginfo_t *sig_info, void *texte)
{
    _bit32(1);
    return ;
}

int keep_int(_32bit_t *bit32)
{
    int n;

    bit32->sa1.sa_sigaction = &less_int;
    sigaction(SIGUSR1, &bit32->sa1, NULL);
    bit32->sa2.sa_sigaction = &more_int;
    sigaction(SIGUSR2, &bit32->sa2, NULL);
    _bit32(3);
    usleep(1000000000);
    for (int i = 0; i < 31; i += 1) {
        usleep(10000);
    }
    n = _bit32(-1);
    my_printf("%i\n", n);
}

int send_int(_32bit_t *bit32)
{
    char *str = my_termline();
    int n;

    if (str == NULL)
        return 84;
    n = my_strlen(str);
    str[n - 1] = '\0';
    n = my_getnbr(str);
    for (int i = 0; i < 32; i += 1) {
        switch (n & (1 << i)) {
            case 0: kill(bit32->pid2, SIGUSR1);
                break;
            default: kill(bit32->pid2, SIGUSR2);
                break;
        }
        usleep(1000);
    }
    return 0;
}
