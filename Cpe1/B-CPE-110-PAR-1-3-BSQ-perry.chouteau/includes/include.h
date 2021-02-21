/*
** EPITECH PROJECT, 2020
** Psu2
** File description:
** navy.h
*/

#ifndef S_H
#define S_H

//math
typedef struct
{
    int x;
    int y;
}vector2i;

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
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

//criterion
#include <criterion/criterion.h>

//color
#define RESET_ALL "\x1b[0m"
#define PC_BOLD "\x1b[1m"
#define PC_ITALIC "\x1b[3m"
#define UNDER_LINE "\x1b[4m"
#define UNDER_LINE_   "\x1b[21m"
#define FT_GREY "\x1b[2m"
#define FT_BLACK   "\x1b[30m"
#define FT_RED  "\x1b[31m"
#define FT_GREEN   "\x1b[32m"
#define FT_YELLOW  "\x1b[33m"
#define FT_BLUE "\x1b[34m"
#define FT_MAGENTA "\x1b[35m"
#define FT_CYAN "\x1b[36m"
#define BG_BLACK   "\x1b[40m"
#define BG_RED  "\x1b[41m"
#define BG_GREEN   "\x1b[42m"
#define BG_YELLOW  "\x1b[43m"
#define BG_BLUE "\x1b[44m"
#define BG_MAGENTA "\x1b[45m"
#define BG_CYAN "\x1b[46m"

//████████████████████████████████████████████████//

//struct
typedef struct
{
    int fd;
    char *buffer;
    vector2i tab_sz;
    char **tab;
    vector2i place;
    int square_sz;
}s_t;

// error / -h / init
int my_error(int ac, char **av);
int init(s_t *s, int ac, char **av);
int str_to_tab(s_t *s);
void loop_map(s_t *s);

#endif