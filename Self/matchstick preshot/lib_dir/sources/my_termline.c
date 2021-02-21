/*
** EPITECH PROJECT, 2020
** B-EXAMPLE-100-PAR-1-3-example-perry.chouteau
** File description:
** my_term_line.c
*/

#include <stdio.h>
#include <stdlib.h>

char *my_termline(void)
{
    char *line = NULL;
    size_t len = 0;
    int n = 0;

    getline(&line, &len, stdin);
    for (n = 0; line[n]; n += 1);
    line[n - 1] = '\0';
    return line;
}

char *str_term_isnum(char *str)
{
    for (int i = 0; str[i]; i += 1)
        if (str[i] < '0' || str[i] > '9')
            return NULL;
    return str;
}