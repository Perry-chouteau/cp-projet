/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-navy-perry.chouteau
** File description:
** main.c
*/

#include "../includes/navy.h"
#include <stdio.h> 
#include <signal.h>

void signal_callback_handler(int signum)
{
    printf("Signal User defined signal %i received from %i\n", signum,getpid());
    // Cleanup and close up stuff here

    // Terminate program
    exit(signum);
}


/*int main(int ac, char **av)
{
    signal(SIGKILL, signal_callback_handler);
    while (1);
    return 0;
}*/

void handle_sigint(int sig)
{
    printf("Caught signal %d\n", sig);
}
int main(int ac, char **av)
{
    int n1 = my_getnbr(av[1]);
    int n2 = my_getnbr(av[2]);
    signal(n1, handle_sigint);
    while (1);
    return 0;
} 