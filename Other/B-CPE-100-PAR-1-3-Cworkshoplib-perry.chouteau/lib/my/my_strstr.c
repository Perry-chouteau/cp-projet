/*
** EPITECH PROJECT, 2020
** my strstr
** File description:
** find and return a sub-string into a string up to the end 
*/

char *my_strstr(char *str, char const *to_find)
{
    if (str[0] == '\0')
        return 0;
    for (int i ;to_find[i] != '\0'; i += 1)
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
    return str;
}
