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

int destroy(game_t *game)
{
    sfMusic_destroy(MUSIC.music);
    return 0;
}