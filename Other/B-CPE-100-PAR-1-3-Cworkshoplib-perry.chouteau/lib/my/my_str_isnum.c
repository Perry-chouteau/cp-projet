/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

int my_str_isnum(char const *str)
{
    for (int i = 0 ; str[i] != '\0'; i += 1)
        if (str[i] <= '0' || str[i] >= '9')
            return 0;
    return 1;
}
