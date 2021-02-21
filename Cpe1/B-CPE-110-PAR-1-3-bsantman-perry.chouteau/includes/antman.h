/*
** EPITECH PROJECT, 2020
** Psu2
** File description:
** navy.h
*/

#ifndef ZIP_H
#define ZIP_H

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
}arg_t;

typedef struct
{
    int fd;
    int sz;
    char *buffer;
}file_t;

typedef struct
{
    struct stat stats;
    int exit;
    arg_t arg;
    file_t file;
    char *_buffer;
}zip_t;

// error / -h / init
int my_error(int ac, char **av);
void describe(void);
zip_t init(zip_t zip, int ac, char **av);
zip_t ant_one(zip_t zip);

#endif