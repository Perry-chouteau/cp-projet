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

int init_castle(game_t *game)
{
    CASTLE.damage = 0;
    return 0;
}

int init_enemy(game_t *game)
{
    sfVector2f vf = {100, 0};
    ENEMY = csfml_empty_list();
    return 0;
}

int init_tower(game_t *game)
{
    TOWER = csfml_empty_list();
    return 0;
}

int init_clock(game_t *game)
{
    CLOCK = sfClock_create();
    return 0;
}