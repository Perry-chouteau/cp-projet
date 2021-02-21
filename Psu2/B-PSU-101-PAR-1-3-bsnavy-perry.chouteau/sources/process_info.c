/*
** EPITECH PROJECT, 2020
** Psu2
** File description:
** main.c
*/

#include "../includes/navy.h"

void print_pid(void)
{
    __pid_t pid;

    my_printf("PID: %i\n", getpid());
    my_printf("PPID: %i\n", getppid());
    my_printf("PGID: %i\n", __getpgid(pid));
}