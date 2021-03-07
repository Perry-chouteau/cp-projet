/*
** EPITECH PROJECT, 2020
** project
** File description:
** project.h
*/

#ifndef PROJECT_H
#define PROJECT_H

//lib - lib_c
#include "../lib/lib_dir/includes/my.h"
#include <stdlib.h>
#include <string.h>

//write
#include "../lib/printf_dir/includes/my_printf.h"
#include <unistd.h>
#include <stdio.h>

//math
#include <math.h>

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

// struct
typedef struct
{
    int ac;
    char **av;

    int n;
    int *arr;
    char c;
    char *s;
    char **tab;
}s_t;

// error / -h / init
int my_error(int ac, char **av);
void describe(void);
s_t *init(s_t *s, int ac, char **av);

#endif
