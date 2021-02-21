/*
** EPITECH PROJECT, 2020
** concat_params
** File description:
** Turns the command-line given arguments into a single string
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int get_argv_len(int argc, char **argv)
{
    int max = 0;

    for (int i = 0; i < argc; i += 1)
        max += my_strlen(argv[i]) + 1;
    return (max);
}

char *concat_params(int argc, char **argv)
{
    char *string = malloc(sizeof(char) * (get_argv_len(argc, argv) + 1));

    for (int i = 0; i < argc; i += 1) {
        string = my_strcat(string, argv[i]);
        if (i < argc - 1)
            string = my_strcat(string,"\n");
    }
    return (string);
}
