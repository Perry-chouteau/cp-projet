/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_revstr(char *str)
{
    int i = 0;
    int n;
    char swap;

    while (str[i] != '\0') {
        i += 1;
    }
    n = i - 1;
    i = 0;
    while (i < n) {
        swap = str[n];
        str[n] = str[i];
        str[i] = swap;
        n -= 1;
        i += 1;
    }
    return (str);
}
