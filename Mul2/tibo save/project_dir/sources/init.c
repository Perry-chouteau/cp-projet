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

int map(game_t *def, int ac, char **av)
{
    char *buf;
    if (ac == 2)
        buf = my_keep_str_file(av[1]);
    def->bg = malloc(sizeof(data_t *) * 11);
    def->bg[10] = NULL;
    for (int i = 0; def->bg[i] != NULL;)
        def->bg[0] = malloc(sizeof(data_t) * 10);
    
    return 0;
}

int init(game_t *def, int ac, char **av)
{
    if (map(def, ac, av) == 84)
        return 84;
    def->window = create_Window();
    return 0;
}