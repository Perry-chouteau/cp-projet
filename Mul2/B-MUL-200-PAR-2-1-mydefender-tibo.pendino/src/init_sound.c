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

int init_music(game_t *game)
{
    const char *filename = "assets/sounds/music.ogg";

    MUSIC.volume_max = 100;
    MUSIC.volume_min = 0;
    MUSIC.volume = 10;
    MUSIC.music = sfMusic_createFromFile(filename);
    sfMusic_setLoop(MUSIC.music, sfTrue);
    sfMusic_setVolume(MUSIC.music, MUSIC.volume);
    sfMusic_play(MUSIC.music);
    return 0;
}

int init_sound(game_t *game)
{
    return 0;
}