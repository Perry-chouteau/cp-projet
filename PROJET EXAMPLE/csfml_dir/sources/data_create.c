/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** csfml_data_linklist.c
*/

#include "../includes/csfml.h"
#include "../includes/linklist.h"
#include "../includes/bool.h"

data_t create_data(char *filepath)
{
    data_t data;
    data.pos.x = 0;
    data.pos.y = 0;
    data.scl.x = 1;
    data.scl.y = 1;
    data.txr = sfTexture_createFromFile(filepath, NULL);
    data.spr = sfSprite_create();
    sfSprite_setTexture(data.spr, data.txr, TRUE);
    sfSprite_setPosition(data.spr, data.pos);
    sfSprite_setScale(data.spr, data.scl);
    return data;
}

sfVector2f create_sfV2f(float f1, float f2)
{
    sfVector2f f = {f1, f2};
    return f;
}

sfVector2i create_sfV2i(int i1, int i2)
{
    sfVector2i i = {i1, i2};
    return i;
}

sfIntRect create_intrect(int left, int top, int width, int height)
{
    sfIntRect irect = {left, top, width, height};
    return irect;
}

rect_t create_rect(sfIntRect irect, sfVector2i om, sfVector2i om_)
{
    rect_t rect = {irect, om.x, om_.x, om.y, om_.y};
    return rect;
}