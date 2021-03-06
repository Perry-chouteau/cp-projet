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
#include "my_defender.h"
#include "my_csfml.h"

int set_menu_pos(game_t *game)
{
    BUTTON[START].pos.x = 860;
    BUTTON[START].pos.y = 700;
    BUTTON[QUIT].pos.x = 10;
    BUTTON[QUIT].pos.y = 10;
    BUTTON[SETTINGS].pos.x = 1840;
    BUTTON[SETTINGS].pos.y = 10;
    BUTTON[HOWTO].pos.x = 1750;
    BUTTON[HOWTO].pos.y = 10;
    sfSprite_setPosition(BUTTON[START].sprite, BUTTON[START].pos);
    sfSprite_setPosition(BUTTON[QUIT].sprite, BUTTON[QUIT].pos);
    sfSprite_setPosition(BUTTON[SETTINGS].sprite, BUTTON[SETTINGS].pos);
    sfSprite_setPosition(BUTTON[HOWTO].sprite, BUTTON[HOWTO].pos);
    return 0;
}

int draw_menu_buttons(game_t *game)
{
    set_menu_pos(game);
    DRAW(WINDOW.window, BUTTON[START].sprite, NULL);
    DRAW(WINDOW.window, BUTTON[QUIT].sprite, NULL);
    DRAW(WINDOW.window, BUTTON[SETTINGS].sprite, NULL);
    DRAW(WINDOW.window, BUTTON[HOWTO].sprite, NULL);
    return 0;
}

int draw_menu(game_t *game)
{
    for (int i = 0; i < 10; i++)
        DRAW(WINDOW.window, MENU[i].sprite, NULL);
    draw_menu_buttons(game);
    DRAW(WINDOW.window, TITLE.sprite, NULL);
    return 0;
}

int draw(game_t *game)
{
    menu_parallax(game);
    sfRenderWindow_clear(WINDOW.window, sfBlack);
    draw_menu(game);
    sfRenderWindow_display(WINDOW.window);
    return 0;
}