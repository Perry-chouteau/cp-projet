/*
** EPITECH PROJECT, 2020
** fs_cat_x_bytes.c
** File description:
** fs_cat_x_bytes
*/

#include "../includes/bs_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void fs_cat_x_bytes(char const *filepath, int x)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (x + 10));
    int ret = read(fd, buffer, x);

    putstr_bsq(buffer);
    close(fd);
}
