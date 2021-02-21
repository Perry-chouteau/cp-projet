/*
** EPITECH PROJECT, 2020
**  array_1d_print_chars.c
** File description:
**  array_1d_print_chars
*/


#include "../includes/bs_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void  array_1d_print_chars(char const *arr)
{
    for (int i = 0; arr[i] != '\0'; i += 1)
        if (arr[i] != '\0')
            write(1, "x\n", 1);
}