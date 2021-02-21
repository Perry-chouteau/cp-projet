/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** give file name
*/

#include <sys/types.h>
#include <dirent.h>

void file_name(char *name)
{
    DIR *folder;

    name = opendir(name);
    closedir(folder);
    return ;
}
