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

const char *button_filepath[11] = {"assets/img/buttons/button_start.png",
                                    "assets/img/buttons/button_how_to_play.png",
                                    "assets/img/buttons/button_play_again.png",
                                    "assets/img/buttons/button_quit.png",
                                    "assets/img/buttons/button_proceed.png",
                                    "assets/img/buttons/button_settings.png",
                                    "assets/img/buttons/button_volume.png",
                                    "assets/img/buttons/button_customize.png",
                                    "assets/img/buttons/button_use.png",
                                    "assets/img/buttons/button_map.png",
                                    "assets/img/buttons/button_cross.png"};

const char *bg_filepath[10] = {"assets/img/menu/space.png",
                            "assets/img/menu/space.png",
                            "assets/img/menu/big_stars01.png",
                            "assets/img/menu/big_stars01.png",
                            "assets/img/menu/big_stars02.png",
                            "assets/img/menu/big_stars02.png",
                            "assets/img/menu/small_stars01.png",
                            "assets/img/menu/small_stars01.png",
                            "assets/img/menu/small_stars02.png",
                            "assets/img/menu/small_stars02.png"};

int init_title(game_t *game)
{
    char *filepath = "assets/img/other/title.png";

    TITLE.texture = CREATE(filepath, NULL);
    TITLE.sprite = sfSprite_create();
    sfSprite_setTexture(TITLE.sprite, TITLE.texture, sfTrue);
    TITLE.pos.x = 650;
    TITLE.pos.y = 300;
    TITLE.scale.x = 1.5;
    TITLE.scale.y = 1.5;
    sfSprite_setPosition(TITLE.sprite, TITLE.pos);
    sfSprite_setScale(TITLE.sprite, TITLE.scale);
    return 0;
}

int init_button(game_t *game)
{
    BUTTON = malloc(sizeof(object_t) * 11);
    for (int i = 0; i < 11; i++) {
        BUTTON[i].texture = CREATE(button_filepath[i], NULL);
        BUTTON[i].sprite = sfSprite_create();
        sfSprite_setTexture(BUTTON[i].sprite,
        BUTTON[i].texture, sfTrue);
    }
    return 0;
}

int init_background_menu(game_t *game)
{
    MENU = malloc(sizeof(object_t) * 10);
    for (int i = 0; i < 10; i++) {
        MENU[i].texture = CREATE(bg_filepath[i], NULL);
        MENU[i].sprite = sfSprite_create();
        sfSprite_setTexture(MENU[i].sprite,
        MENU[i].texture, sfTrue);
    }
    MENU[0].pos.y = 0;
    MENU[1].pos.y = 0;
    MENU[0].pos.x = 0;
    MENU[1].pos.x = 4096;
    for (int i = 2; i < 10; i++) {
        MENU[i].pos.y = 0;
        if (i % 2 == 0)
            MENU[i].pos.x = 0;
        else
            MENU[i].pos.x = 1920;
        sfSprite_setPosition(MENU[i].sprite, MENU[i].pos);
    }
    return 0;
}

int init_menu(game_t *game)
{
    init_title(game);
    init_button(game);
    init_background_menu(game);
    return 0;
}