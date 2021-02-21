/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    while (dest[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}
