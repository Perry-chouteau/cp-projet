/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
** File description:
** concat_strings.c
*/

char *concat_strings(char *dest, char const *src)
{
    int sz;
    int i;
    for (sz = 0; dest[sz] != '\0'; sz += 1);
    for (i = 0 ; i < sz && src[i] != '\0' ; i += 1)
        dest[sz + i] = src[i];
    dest[sz + i] = '\0';
    return dest;
}