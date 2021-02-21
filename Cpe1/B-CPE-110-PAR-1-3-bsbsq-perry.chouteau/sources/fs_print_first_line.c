/*
** EPITECH PROJECT, 2020
** fs_print_first_line.c
** File description:
** fs_print_first_line
*/

#include "../includes/bs_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void fs_print_first_line(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * 2000000010);
    int ret = read(fd, buffer, 2000000000);
    int i = 0;
    for (; buffer[i] != '\n'; i += 1);
    for (i += 1; buffer[i] != '\n'; i += 1)
        putchar_bsq(buffer[i]);
    putchar_bsq(buffer[i]);
    close(fd);
}
