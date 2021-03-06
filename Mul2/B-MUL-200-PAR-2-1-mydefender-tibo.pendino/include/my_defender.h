/*
** EPITECH PROJECT, 2020
** project
** File description:
** project.h
*/

#ifndef DEFENDER_H
#define DEFENDER_H

////////// Includes //////////

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "my_csfml.h"

////////// Defines //////////

// -> System //

#define WINDOW game->window
#define EVENT game->event
#define KEY_EVENT game->key_event
#define MUSIC game->music
#define SOUND game->sound
#define CLOCK game->clock

// -> Entities / Backgrounds //

#define BACKGROUND game->picture.background
#define MENU game->picture.menu_background
#define CASTLE game->picture.castle
#define ENEMY game->picture.enemy
#define TOWER game->picture.tower
#define TITLE game->picture.title

// -> Functions //

#define CREATE sfTexture_createFromFile
#define DRAW sfRenderWindow_drawSprite

// -> Buttons //

#define BUTTON game->picture.button
#define START 0
#define HOWTO 1
#define PLAY 2
#define QUIT 3
#define PROCEED 4
#define SETTINGS 5
#define VOLUME 6
#define CUSTOMIZE 7
#define USE 8
#define MAP 9
#define CROSS 10

//typedef enum button_e {START, HOWTO, PLAY, QUIT, PROCEED, SETTINGS, VOLUME, CUSTOMIZE, USE, MAP, CROSS}; tibo lis ça

////////// Structures //////////

typedef struct window_s
{
    sfRenderWindow *window;
    sfVector2u size;
    sfVector2i pos;
    unsigned int framerate;
}window_t;

typedef struct picture_s
{
    object_t **background;
    csfml_cell_t *enemy;
    csfml_cell_t *tower;
    object_t *menu_background;
    object_t *button;
    object_t castle;
    object_t title;
}picture_t;

typedef struct game_s
{
    window_t window;
    picture_t picture;
    sfEvent event;
    sfKeyEvent key_event;
    sfClock *clock;
    music_t music;
    sound_t *sound;
}game_t;

////////// Prototypes //////////

/* defender.c */
int defender(int ac, char **av);
int change(game_t *game);

/* destroy.c */
int destroy(game_t *game);

/* draw.c */
int draw(game_t *game);

/* error_handling.c */
int display_help(int ac, char **av);
int error_handling(int ac, char **av, char **env);

/* event.c */
int event(game_t *game);

/* init_menu.c */
int init_menu(game_t *game);
int init_button(game_t *game);
int init_background_menu(game_t *game);

/* init_object.c */
int init_castle(game_t *game);
int init_enemy(game_t *game);
int init_tower(game_t *game);
int init_clock(game_t *game);

/* init_structure.c */
int init_sound(game_t *game);
int init_music(game_t *game);

/* init_structure.c */
int set_tiles(object_t **bg, int i, int j, char c);
int init_background(game_t *game, int ac, char **av);
int init_structure(game_t *game, int ac, char **av);
int init_window(game_t *game);

/* menu_parallax.c */
int replace_parallax_origin(game_t *game);
int menu_parallax(game_t *game);

#endif