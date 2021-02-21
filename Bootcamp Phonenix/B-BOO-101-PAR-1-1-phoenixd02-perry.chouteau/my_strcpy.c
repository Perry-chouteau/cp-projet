/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
**  my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i += 1)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}