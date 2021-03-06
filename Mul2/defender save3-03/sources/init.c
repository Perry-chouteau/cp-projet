/*
** EPITECH PROJECT, 2020
** init.c
** File description:
** init
*/

#include "../includes/include.h"

sfRenderWindow *create_Window(void)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {1920, 1080, 32};

    window = sfRenderWindow_create(video_mode,  \
    "Tower_defender", sfDefaultStyle, NULL);
    return window;
}

int set_map(game_t *def, int i, int j, char c)
{
    def->bg[i][j].life = 0;
    def->bg[i][j].life += (c == '.') ? 1: 0;
    def->bg[i][j].pos.x = 192 * j;
    def->bg[i][j].pos.y = 108 * i;
    return 0;
}

int map(game_t *def, char **av)
{
    char *buf = my_keep_str_file(av[1]);

    def->bg = malloc(sizeof(data_t *) * 11);
    def->bg[10] = NULL;
    for (int i = 0, k = 0; i < 10; i += 1, k += 1) {
        def->bg[i] = malloc(sizeof(data_t) * 10);
        for (int j = 0; j < 10; j += 1, k += 1) {
            set_map(def, i, j, buf[k]);
        }
    }
    return 0;
}

int init(game_t *def, int ac, char **av)
{
    if (map(def, av) == 84)
        return 84;
    def->window = create_Window();
    return 0;
}