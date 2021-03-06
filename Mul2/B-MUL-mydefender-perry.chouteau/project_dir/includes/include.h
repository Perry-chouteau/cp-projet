/*
** EPITECH PROJECT, 2020
** project
** File description:
** project.h
*/

#ifndef PROJECT_H
#define PROJECT_H

#include "../../lib_dir/includes/my.h"
#include "../../csfml_dir/includes/csfml_include.h"

#include <time.h>

#include <unistd.h>

#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>
#include <dlfcn.h>

typedef struct
{
    sfRenderWindow *window;
    sfClock *clock;
    sfEvent event;
    sfKeyEvent key;
    data_t **bg;
    csfml_cell_t **enemy;
} game_t;

int changes(game_t *def);

int defender(int ac, char **av);

//  window | -h
int describe(void);

//  set all
int init(game_t *def, int ac, char **av);

//  event
int check_event(game_t *def);

//draw
int draw_image(game_t *def);

//destroy, free
int to_destruct(game_t *def);

#endif