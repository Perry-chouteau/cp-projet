/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** music.h
*/


#ifndef CSFML_RECT_H
#define CSFML_RECT_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

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