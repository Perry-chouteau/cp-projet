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
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>

//write
#include "../printf_dir/includes/my_printf.h"
#include <unistd.h>
#include <stdio.h>

//math
#include "../math_dir/includes/math.h"
#include <math.h>

//signal
#include <signal.h>
#include <stddef.h>

// sys & bits
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//criterion
#include <criterion/criterion.h>

//████████████████████████████████████████████████//

typedef enum 
{
    D, U, L, R
}d_t;

//████████████████████████████████████████████████//

// struct

typedef struct
{
    int ch;
    char **tab;
    vec2i_t p_pos;
    char **map_save;
}s_t;

//file to buf
char *my_keep_str_file(char *filepath);

// error / -h
void describe(void);
int my_error(int ac, char **av);

//init 
void init_window(void);
int init(s_t *s, int ac, char **av);

//key
int my_key(s_t *s);
int changes(s_t *s);

//free
void free_all(s_t *s);

#endif
