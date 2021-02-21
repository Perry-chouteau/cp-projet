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

//////////structure////////////
typedef struct
{
    int args;
    int temp;
    char **tab;

    pid_t pid;
}shellarg_t;

typedef struct
{
    char *cwd;
    size_t cwd_sz;
}cd_t;

typedef struct
{
    char **def_env;
}env_t;

typedef struct
{
    char *name;
    char **path;
    int path_sz;
    int n;

    bool b_bool;
    char *exe_path;
    cd_t cd;
    env_t env;
    shellarg_t sharg;
}shell_t;

// error / -h / init
int my_error(int ac, char **av, char **env);
void describe(void);
void init(shell_t *sh, char **env);
void all_cond(shell_t *sh, char **env);

// cd_un_set_env
void cond1(shell_t *sh, char **env);
int cond2(shell_t *sh, char **env, int i);
int cond3(shell_t *sh, char **env, int i);
void my_unsetenv(shell_t *sh, char **env);
void my_setenv(shell_t *sh, char **env);
void my_env(shell_t *sh, char **env);
void my_cd(shell_t *sh, char **env);
#endif
