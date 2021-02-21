/*
** EPITECH PROJECT, 2020
** fs_open_file.c
** File description:
** fs_open_file
*/

#include "../includes/bs_bsq.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        putstr_bsq("FAILURE\n");
    if (fd == 3)
        putstr_bsq("SUCCESS\n");
    return fd;
}
