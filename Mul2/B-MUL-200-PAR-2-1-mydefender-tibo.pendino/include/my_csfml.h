/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** rect.h
*/


#ifndef CSFML_RECT_H
#define CSFML_RECT_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdlib.h>

typedef struct
{
    sfIntRect rect;
    int offset;
    int offset_;
    int max;
    int max_;
}rect_t;

typedef struct
{
    sfSound *sound;
    sfSoundBuffer *buf;
    float volume;
}sound_t;

typedef struct object_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f scale;
    rect_t rect;
    int life;
    int damage;
}object_t, data_t;

typedef struct music_s
{
    sfMusic *music;
    float volume;
    float volume_min;
    float volume_max;
}music_t;

data_t csfml_create_data(char *filepath);

sfVector2i create_sfV2i(int i1, int i2);
sfVector2f create_sfV2f(float f1, float f2);

sfIntRect create_intrect(int left, int top, int width, int height);
rect_t create_rect(sfIntRect irect, sfVector2i om, sfVector2i om_);

// linked_list //

typedef struct csfml_cell_s
{
    data_t data;
    struct csfml_cell_s *next;
}csfml_cell_t;

void csfml_add_at(csfml_cell_t **list, data_t data, int pos);
data_t csfml_get_at(csfml_cell_t **list, int pos);
void csfml_set_at(csfml_cell_t **list, data_t data, int pos);
void csfml_free_at(csfml_cell_t **list, int pos);

csfml_cell_t *csfml_empty_list(void);
int csfml_len_list(csfml_cell_t **list);
void csfml_free_list(csfml_cell_t **list);
void csfml_print_list(sfRenderWindow *window, csfml_cell_t **list);

void csfml_init_pos_at(csfml_cell_t **list, sfVector2f vpos, int pos);

#endif