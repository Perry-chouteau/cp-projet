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
    int pid1;
    int pid2;
    struct sigaction sa1;
    struct sigaction sa2;
}_32bit_t;

int term1(int ac, char **av);
int term2(int ac, char **av);

// error / -h / init

int my_error(int ac, char **av);
void describe(void);
int init(int ac, char **av);

int co_guest(_32bit_t *bit32);
int co_host(_32bit_t *bit32);

int keep_int(_32bit_t *bit32);
int send_int(_32bit_t *bit32);

#endif
