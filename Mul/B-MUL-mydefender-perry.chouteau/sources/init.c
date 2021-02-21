/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** init
*/

#include "../includes/defender.h"

sfRenderWindow *create_Window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode,  \
    "Tower_defender", sfDefaultStyle, NULL);
    return window;
}

int init_bloc(game_t *def)
{
    def->n_bloc = 1;
    def->bloc = malloc(sizeof(data_t) * def->n_bloc);
    for (int i = 0; i < def->n_bloc; i += 1) {
        def->bloc[i].pos.x = 0;
        def->bloc[i].pos.y = 0;
        def->bloc[i].scl.x = 1;
        def->bloc[i].scl.y = 1;
    }
    def->bloc[0].life = 150;
    def->bloc[0].scl.x = 3.2;
    def->bloc[0].scl.y = 2.7;
    def->bloc[0].txr = sfTexture_createFromFile("image/map.png", NULL);
    for (int i = 0; i < def->n_bloc; i += 1) {
        def->bloc[i].spr = sfSprite_create();
        sfSprite_setTexture(def->bloc[i].spr, def->bloc[i].txr, true);
        sfSprite_setScale(def->bloc[i].spr, def->bloc[i].scl);
    }
    return 0;
}

int init_enemy(game_t *def)
{
    def->round = 0;
    def->enemy = malloc(sizeof(csfml_cell_t *));
    def->enemy[0] = csfml_empty_list();
}

int init(game_t *def)
{
    def->window = create_Window();
    sfRenderWindow_setFramerateLimit(def->window, 60);
    init_bloc(def);
    init_enemy(def);

    return 0;
}