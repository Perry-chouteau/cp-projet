/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd02-perry.chouteau
** File description:
** my_strcapitalize.c
*/

char *my_strcapitalize( char *str)
{
    int i;
    int j;

    if (str[0] > 'a' || str[0] < 'z')
        str[0] -= 32;
    for (i = 0, j = 1; str[i + 1] != '\0'; i += 1, j += 1)
        if (str[i] < 'a' || str[i] > 'z')
            if (str[i] < 'A' || str[i] > 'Z')
                if (str[j] > 'a' || str[j] < 'z')
                    str[j] -= 32;
    return str;
}