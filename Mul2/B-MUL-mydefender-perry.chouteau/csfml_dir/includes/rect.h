/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** rect.h
*/


#ifndef CSFML_RECT_H
#define CSFML_RECT_H

#include "csfml.h"

typedef struct
{
    sfIntRect rect;
    int offset;
    int offset_;
    int max;
    int max_;
}rect_t;

sfIntRect create_intrect(int left, int top, int width, int height);
rect_t create_rect(sfIntRect irect, sfVector2i om, sfVector2i om_);

#endif