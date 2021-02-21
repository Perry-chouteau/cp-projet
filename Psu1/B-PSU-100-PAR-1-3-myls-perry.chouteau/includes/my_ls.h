/*
** EPITECH PROJECT, 2020
** B-PSU-100-PAR-1-3-myls-perry.chouteau
** File description:
** my_ls.h
*/

#ifndef LS_H
#define LS_H

#include "../printf_dir/includes/my_printf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>

typedef struct
{
    int cp_ac;
    char **cp_av;
}ls_t;

void describe(void);
int ls_only(int ac, char **av);
int ls_dir1(int ac, char **av);
int ls_dir2(int ac, char **av);
void ls_flag(int ac, char **av);
int ls_reverse(int ac, char **av);
#endif