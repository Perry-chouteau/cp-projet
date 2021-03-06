/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** object.h
*/


#ifndef CSFML_OBJECT_H
#define CSFML_OBJECT_H

#include "csfml.h"
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
