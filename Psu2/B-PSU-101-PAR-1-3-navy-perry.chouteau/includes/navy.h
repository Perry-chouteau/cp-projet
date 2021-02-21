/*
** EPITECH PROJECT, 2020
** B-PSU-101-PAR-1-3-navy-perry.chouteau
** File description:
** navy.h
*/

#ifndef NAVY_H
#define NAVY_H

//lib - lib_c
#include "../lib_dir/includes/my.h"
#include <stdlib.h>
#include <string.h>

//write - write_c
#include "../printf_dir/includes/my_printf.h"
#include <unistd.h>
#include <stdio.h>

//signal
#include <signal.h>
#include <stddef.h>

//open - read - write -stat
#include <sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

//struct global
typedef struct
{
    int pid;
    char **map;
}global_t;

//struct principale
typedef struct
{
    int cp_c;
    char **cp_v;
    char **map;
}navy_t;

//connexion
int info_prog(void);
int error(int ac, char **av);
int my_connexion(char **av, int who);
int co_p1(char **av);
int co_p2(char **av);
void p1_connect(int signum, siginfo_t *sig_info, void *texte);
void p2_connect(int signum, siginfo_t *sig_info, void *texte);

//map
int my_map(char **av, int who);

#endif