/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
**say number character of a string
*/

int my_strlen(char const *str)
{
    int i;

    for(i= 0; str[i] != '\0'; i += 1);
    return i;
}
