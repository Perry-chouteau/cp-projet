/*
** EPITECH PROJECT, 2020
** windows
** File description:
** windows
*/

#include <SFML/Graphics.h>

static sfRenderWindow *create_Window(int x, int y, int bbp, char *name)
{
    sfRenderWindow *window;
    sfVideoMode video_mode = {x, y, bbp};

    window = sfRenderWindow_create(video_mode, name, sfDefaultStyle, NULL);
    return (window);
}

static void check_event(sfRenderWindow *window)
{
    sfEvent event;

    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

int main(void)
{
    sfRenderWindow *window = create_Window(1080, 720, 32, "hunter");
    sfVideoMode video_mode;
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            check_event(window);
        }
        sfRenderWindow_setFramerateLimit(window, 64);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
    return 0;
}
