/*
** EPITECH PROJECT, 2020
** array_1d_print_ints.c
** File description:
** array_1d_print_ints
*/

#include "../includes/bs_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void  array_1d_print_ints(int const *arr, int size)
{
    for (int i = 0; i != size; i += 1) {
        putnbr_bsq(arr[i]);
        write(1, "\n", 1);
    }
    return ;
}
