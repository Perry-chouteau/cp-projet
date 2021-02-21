/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_strupcase(char *str)
{
    int diff = 'A' - 'a';
    int i = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] += diff;
    return (str);
}
