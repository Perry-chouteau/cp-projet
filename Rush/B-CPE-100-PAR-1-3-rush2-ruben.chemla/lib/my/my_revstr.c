/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** reverse a string
*/

char *my_revstr(char *str)
{
    int z = 0;
    char dest[] = "toto";
    int i = 0;

    while (str[i] != '\0') {

        dest[i] = str[i];
        i = i + 1;
    }

    i = i - 1;

    while (dest[i] != '\0') {

        str[i] = dest[z];
        i = i - 1;
        z = z + 1;
    }
    return (str);
}
