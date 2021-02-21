/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenates two string
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int z = 0;
    int x = 0;

    while (dest[i] != '\0') {
        i = i + 1;
    }
    z = i;
    if (dest[0] == 0)
        while (src[x] != '\0') {
            dest[x] = src[x];
            x = x + 1;
        }
    while (z > x && src[x] != '\0') {

        dest[z + x] = src[x];
        x = x + 1;
    }
    dest[z + x] = '\0';
    return (dest);
}
