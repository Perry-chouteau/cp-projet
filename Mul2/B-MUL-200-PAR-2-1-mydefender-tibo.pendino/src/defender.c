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

int change(game_t *game)
{
    return 0;
}

int defender(int ac, char **av)
{
    game_t game;

    init_structure(&game, ac, av);
    while (sfRenderWindow_isOpen(game.window.window)) {
        event(&game);
        draw(&game);
    }
    destroy(&game);
    return 0;
}