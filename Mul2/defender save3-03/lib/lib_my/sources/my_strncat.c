/*
** EPITECH PROJECT, 2020
** my str cat
** File description:
** my str cat
*/

char *my_strncat(char *dest, char *src, int nb)
{
    int i = 0;
    int j = 0;

    for (; dest[i]; i += 1);
    while (src[j] != '\0' && j < nb)
        dest[i += 1] = src[j += 1];
    dest[i] = '\0';
    return (dest);
}