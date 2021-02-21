/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i += 1;
    }
    while (n != nb) {
        dest[i] = src[n];
        i += 1;
        n += 1;
    }
    return (dest);
}
