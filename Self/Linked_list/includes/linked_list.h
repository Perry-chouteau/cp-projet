/*
** EPITECH PROJECT, 2020
** Psu2
** File description:
** navy.h
*/

#ifndef _LINKED_cell_t_H
#define _LINKED_cell_t_H

//lib - lib_c
#include "../lib_dir/includes/my.h"
#include <stdlib.h>
#include <string.h>

//write
#include "../printf_dir/includes/my_printf.h"
#include <unistd.h>
#include <stdio.h>

//math
#include <math.h>

//signal
#include <signal.h>
#include <stddef.h>

// sys & bits
#include <sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

//criterion
#include <criterion/criterion.h>

//████████████████████████████████████████████████//

// struct
typedef struct dblcell_s
{
    int data;
    struct dblcell_s *back;
    struct dblcell_s *next;
}dblcell_t;

// struct
typedef struct cell_s
{
    int data;
    struct cell_s *next;
}cell_t;

// error / -h
int my_error(int ac, char **av);

// linked list
cell_t *empty_list(void);
int len_list(cell_t **);
void add_at(cell_t **, int, int);
int get_at(cell_t **, int);
void set_at(cell_t **, int, int);
void free_at(cell_t **, int);
void free_list(cell_t **);
void print_list(cell_t **);

#endif