/*
** EPITECH PROJECT, 2020
** my str capitalize
** File description:
** It is the name of string of whose first character we want to capitalize.
*/

#include "../includes/my.h"

char *my_strcapitalize(char *str)
{
    for (int i = 1; str[i] != '\0'; i += 1) {
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ') {
                str[i] = str[i] - ('A' - 'a');
        }
        if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] != ' ') {
                str[i] = str[i] + ('A' - 'a');
        }
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] + ('A' - 'a');
    return (str);
}