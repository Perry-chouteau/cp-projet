/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** music.h
*/

#ifndef CSFML_OBJECT_H
#define CSFML_OBJECT_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#include "rect.h"

typedef struct
{
    sfVector2f pos;
    sfVector2f scl;
    sfTexture *txr;
    sfSprite *spr;
    rect_t rect;
    int life;
}data_t, object_t;

data_t csfml_create_data(char *filepath);

sfVector2i create_sfV2i(int i1, int i2);
sfVector2f create_sfV2f(float f1, float f2);

#endif