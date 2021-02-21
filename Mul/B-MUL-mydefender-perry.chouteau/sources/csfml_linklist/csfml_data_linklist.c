/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** csfml_data_linklist.c
*/

#include "../../includes/defender.h"

data_t csfml_create_data(char *filepath)
{
    data_t data;
    data.life = 10;
    data.pos.x = 50;
    data.pos.y = 500;
    data.scl.x = 0.025;
    data.scl.y = 0.025;
    data.txr = sfTexture_createFromFile(filepath, NULL);
    data.spr = sfSprite_create();
    sfSprite_setTexture(data.spr, data.txr, TRUE);
    sfSprite_setPosition(data.spr, data.pos);
    sfSprite_setScale(data.spr, data.scl);
    return data;
}