/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find a string on in string
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[0])
            i = i + 1;
    }
    return (str);
}
