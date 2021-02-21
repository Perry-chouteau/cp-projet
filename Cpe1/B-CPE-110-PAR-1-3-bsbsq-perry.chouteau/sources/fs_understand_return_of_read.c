/*
** EPITECH PROJECT, 2020
** emacs fs_understand_return_of_read.c
** File description:
** emacs fs_understand_return_of_read
*/

#include <unistd.h>
#include "../includes/bs_bsq.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int ret = read(fd, buffer, size);

    if (ret == -1)
        putstr_bsq("read failed\n");
    else if (ret == 0)
        putstr_bsq("read has nothing more to read\n");
    else if (ret < size)
        putstr_bsq("read didn't complete the entire buffer\n");
    if (ret == size && ret != 0)
        putstr_bsq("read completed the entire buffer\n");
}
