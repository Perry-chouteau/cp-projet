/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i += 1;
    }
    while (src[n] != '\0') {
        dest[i] = src[n];
        n += 1;
        i += 1;
    }
    return (dest);
}
