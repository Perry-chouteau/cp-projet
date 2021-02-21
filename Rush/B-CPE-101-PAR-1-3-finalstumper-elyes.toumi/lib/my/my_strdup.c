/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    int ac = my_strlen(src);

    str = malloc(sizeof(char) * (ac + 1));

    while (src[i] != '\0') {
        str[i] = src[i];
        i += 1;
    }
    str[i] = '\0';
    return (str);
    free(str);
}
