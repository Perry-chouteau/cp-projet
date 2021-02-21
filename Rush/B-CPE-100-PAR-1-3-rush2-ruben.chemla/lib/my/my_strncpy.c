/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copie string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    n = n - 1;
    while (n >= 0) {

        dest[n] = src[n];
        n = n - 1;
    }

    dest[n] = '\0';
    return (dest);
}
