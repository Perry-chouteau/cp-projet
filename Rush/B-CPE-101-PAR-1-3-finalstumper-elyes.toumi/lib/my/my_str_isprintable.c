/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] > 31 && str[i] < 127)
            i += 1;
        else
            return (0);
    return (1);
}
