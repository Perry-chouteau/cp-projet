/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** event
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include "my_defender.h"
#include "my_csfml.h"

int event(game_t *game)
{
    while (sfRenderWindow_pollEvent(WINDOW.window, &EVENT)) {
        if (EVENT.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(WINDOW.window);
    }
    return 0;
}