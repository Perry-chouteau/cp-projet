/*
** EPITECH PROJECT, 2020
** Psu2
** File description:
** navy.h
*/

#ifndef ITSC_H
#define ITSC_H

//lib - lib_c
#include "../lib_dir/includes/my.h"
#include <stdlib.h>
#include <string.h>

//write
#include "../printf_dir/includes/my_printf.h"
#include <unistd.h>
#include <stdio.h>

//signal
#include <signal.h>
#include <stddef.h>

// sys & bits
#include <sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

//criterion
#include <criterion/criterion.h>

//████████████████████████████████████████████████//

//////////structure////////////
typedef struct
{
    int ac;
    char **av;
    int args;
    int temp;
    char **tab;
    int n;
    pid_t pid;
}s_t;

// error / -h / init
int my_error(int ac, char **av);
void describe(void);
s_t init(int ac, char **av);

#endif