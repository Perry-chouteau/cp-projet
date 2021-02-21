/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

char *my_strlowcase(char *str)
{
    int diff = 'a' - 'A';

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += diff;
    return (str);
}
