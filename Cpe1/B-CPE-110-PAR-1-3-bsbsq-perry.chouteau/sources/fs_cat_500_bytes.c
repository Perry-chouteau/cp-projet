/*
** EPITECH PROJECT, 2020
** fs_cat_500_bytes.c
** File description:
** fs_cat_500_bytes
*/

#include "../includes/bs_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void fs_cat_500_bytes(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 600);
    int ret = read(fd, buffer, 500);

    putstr_bsq(buffer);
    close(fd);
}
