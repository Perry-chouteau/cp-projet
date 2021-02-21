/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            i += 1;
        else
            return (0);
    return (1);
}
