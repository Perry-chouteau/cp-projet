/*
** EPITECH PROJECT, 2020
** fs_get_number_from_first_line.c
** File description:
** fs_get_number_from_first_line
*/

#include "../includes/bs_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int fs_get_number_from_first_line(char const *filepath)
{
    int *fd_ret_res = malloc(sizeof(int) * 3);
    char *buffer = malloc(sizeof(char) * 2147483647);
    char *square_size = malloc(sizeof(char) * 12);

    fd_ret_res[0] = open(filepath, O_RDONLY);
    fd_ret_res[1] = read(fd_ret_res[0], buffer, 2147483646);
    for (int i = 0; buffer[i] != '\n'; i += 1) {
        square_size[i] = buffer[i];
    }
    fd_ret_res[2] = getnbr_bsq(square_size);
    return fd_ret_res[2];
}
