/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return (0);
    return (1);
}
