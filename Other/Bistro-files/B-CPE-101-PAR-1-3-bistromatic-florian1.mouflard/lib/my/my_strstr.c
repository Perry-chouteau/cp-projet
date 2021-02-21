/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** Reproduce the behavior of thestrstrfunction.
*/

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int n = my_strlen(to_find);

    while (str[i] != '\0') {
        while (to_find[j] != '\0' && str[i] == to_find[j]) {
            if (str[i] == to_find[j]) {
                i = i + 1;
                j = j + 1;
            }
            if (to_find[j] == '\0')
                return (&str[i - n]);
        }
        i = i + 1;
    }
    return 0;
}
