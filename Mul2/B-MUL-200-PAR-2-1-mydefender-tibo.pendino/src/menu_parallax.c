/*
** EPITECH PROJECT, 2021
** project
** File description:
** project
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdbool.h>
#include <stdlib.h>
#include "my_defender.h"
#include "my_csfml.h"

int replace_parallax_origin(game_t *game)
{
    if (MENU[0].pos.x <= -4096)  {
            MENU[0].pos.x = 0;
            MENU[1].pos.x = 4096;
        }
    for (int i = 2; i < 10; i++)
        if (MENU[i].pos.x <= -1920)  {
            MENU[i].pos.x = 0;
            MENU[i + 1].pos.x = 1920;
        }
    return 0;
}

int menu_parallax(game_t *game)
{
    replace_parallax_origin(game);
    MENU[0].pos.x -= 0.1;
    MENU[1].pos.x -= 0.1;
    MENU[2].pos.x -= 0.5;
    MENU[3].pos.x -= 0.5;
    MENU[4].pos.x -= 0.8;
    MENU[5].pos.x -= 0.8;
    MENU[6].pos.x -= 1.1;
    MENU[7].pos.x -= 1.1;
    MENU[8].pos.x -= 1.5;
    MENU[9].pos.x -= 1.5;
    for (int i = 0; i < 10; i++)
        sfSprite_setPosition(MENU[i].sprite, MENU[i].pos);
    return 0;
}