/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** function alocate memory and copy string              
*/

#include<stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int n;
    int i;
    
    for(n = 0; src[n] != '\0';n += 1);
    str = malloc(sizeof(char) * (n + 1));
    for(i = 0; i < n; i += 1)
        str[i] = src[i];
    str[i] = '\0';
    return str;
}
