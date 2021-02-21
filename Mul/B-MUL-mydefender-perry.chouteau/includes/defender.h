/*
** EPITECH PROJECT, 2020
** hunter.h
** File description:
** hunter
*/

#ifndef HUNTER_H
#define HUNTER_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#include <time.h>
#include <stddef.h>
#include <stdbool.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dlfcn.h>

#include "../lib_dir/includes/my.h"

typedef enum
{
    FALSE, TRUE
}bool_t;

///////////// ↓  rect  ↓  ///////////////
typedef struct
{
    sfIntRect rect;
    int offset;
    int offset_;
    int max;
    int max_;
}myrect_t;

////////////   ↓ music ↓   //////////////
typedef struct
{
    sfMusic *jump;
    float volume;
}music_t;

///////// link list //////////

typedef struct
{
    sfVector2f pos;
    sfVector2f scl;
    sfTexture *txr;
    sfSprite *spr;
    myrect_t rect;
    int life;
}data_t;

typedef struct csfml_cell_s
{
    data_t data;
    struct csfml_cell_s *next;
}csfml_cell_t;

////////////   ↓ global game ↓   /nb/texture/sprite/music/text/////////
typedef struct
{
    sfRenderWindow *window;
    sfEvent event;
    sfKeyEvent key;
    int n_bloc;
    int round;
    data_t *bloc;
    csfml_cell_t **enemy;
} game_t;

//////////////// cell_data_t ////////////////////


//lib / linked list
double my_atof(char *str);

//  window | -h
void describe(void);

//  set all
int set_all(game_t *defender, int ac, char **av);
int init(game_t *aretourner);

//bloc_pause
int lobby(game_t *defender, sfEvent event);
int lose(game_t *defender, sfEvent event);
int win(game_t *defender, sfEvent event);
int my_pause(game_t *defender, sfEvent event);

//  event
int check_event(game_t *defender);
int check_event_close(game_t *defender);
int check_event_volume(game_t *defender);

//position
int changes(game_t *defender);

//linklist

void csfml_add_at(csfml_cell_t **list, data_t data, int pos);
data_t csfml_get_at(csfml_cell_t **list, int pos);
void csfml_set_at(csfml_cell_t **list, data_t data, int pos);
void csfml_free_at(csfml_cell_t **list, int pos);

csfml_cell_t *csfml_empty_list(void);
int csfml_len_list(csfml_cell_t **list);
void csfml_free_list(csfml_cell_t **list);
void csfml_print_list(sfRenderWindow *window, csfml_cell_t **list);

data_t csfml_create_data(char *filepath);

//draw
int draw_image(game_t *defender, sfRenderWindow *window);

//destroy, free
int to_destruct(game_t *to_destruct);

#endif

