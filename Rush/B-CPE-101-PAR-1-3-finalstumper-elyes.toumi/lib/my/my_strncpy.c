/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    i = 0;
    while (i <= n) {
        dest[i] = src[i];
        i += 1;
        if (dest[i] == '\0') {
            while (n >= i) {
                dest[i] = '\0';
                i += 1;
            }
        }
    }
    return (dest);
}
