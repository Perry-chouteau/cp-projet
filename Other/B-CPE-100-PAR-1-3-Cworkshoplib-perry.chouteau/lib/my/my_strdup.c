/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** copy string in allocate memory
*/

#include "my.h"

char *my_strdup (char const *src)
{
    char *dest;
    int lenght = 0;
    int i = 0;

    lenght = my_strlen(src);
    dest = malloc(sizeof(char *) * (lenght + 1));
    if (dest != 0) {
        my_strcpy(dest, str);
        return (dest);
    }
}
