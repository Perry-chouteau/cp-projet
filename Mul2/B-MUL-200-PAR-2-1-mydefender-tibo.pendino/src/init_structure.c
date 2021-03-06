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

int set_tiles(object_t **bg, int i, int j, char c)
{
    bg[i][j].life = \
    (c == 'L' || c == 'R' || c == 'U' || c == 'D') ? 1 : 0;
    bg[i][j].pos.x = 192 * j;
    bg[i][j].pos.y = 107 * i;
    bg[i][j].scale.x = 1;
    bg[i][j].scale.y = 1;
    if (c == 'L' || c == 'R' || c == 'U' || c == 'D')
        bg[i][j].texture = CREATE("assets/img/maps/way1.png", NULL);
    else
        bg[i][j].texture = CREATE("assets/img/maps/way2.png", NULL);
    bg[i][j].sprite = sfSprite_create();
    sfSprite_setTexture(bg[i][j].sprite, bg[i][j].texture, true);
    sfSprite_setPosition(bg[i][j].sprite, bg[i][j].pos);
    sfSprite_setScale(bg[i][j].sprite, bg[i][j].scale);
    return 0;
}

int init_window(game_t *game)
{
    WINDOW.size.x = 1920;
    WINDOW.size.y = 1080;
    WINDOW.framerate = 60;
    WINDOW.pos.x = 0;
    WINDOW.pos.y = 0;
    sfVideoMode mode = {WINDOW.size.x, WINDOW.size.y, 32};
    sfUint32 style = sfTitlebar | sfClose;
    char *title = "Among Us - Tower Defense";
    WINDOW.window = sfRenderWindow_create(mode, title, style, NULL);
    sfRenderWindow_setFramerateLimit(WINDOW.window, WINDOW.framerate);
    sfRenderWindow_setPosition(WINDOW.window, WINDOW.pos);
    return 0;
}

int init_background(game_t *game, int ac, char **av)
{
    char *buf = "RRRRRRRRRD\n"  \
                "         D\n"  \
                "DLL DLL DL\n"  \
                "D ULL ULL \n"  \
                "D         \n"  \
                "LD RRD RRR\n"  \
                " D U R U  \n"  \
                "RD U R ULL\n"  \
                "D  U R   U\n"  \
                "RRRU RRRRU\n";

    game->picture.background = malloc(sizeof(object_t *) * 10);
    for (int i = 0, k = 0; i < 10; i += 1, k += 1) {
        game->picture.background[i] = malloc(sizeof(object_t) * 10);
        for (int j = 0; j < 10; j += 1, k += 1)
            set_tiles(game->picture.background, i, j, buf[k]);
    }
    return 0;
}

int init_structure(game_t *game, int ac, char **av)
{
    init_window(game);
    init_menu(game);
    init_music(game);
    init_sound(game);
    init_castle(game);
    init_enemy(game, av);
    init_background(game, ac, av);
    return 0;
}