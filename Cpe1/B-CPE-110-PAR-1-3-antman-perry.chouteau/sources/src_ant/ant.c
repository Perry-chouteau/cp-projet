/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-antman-perry.chouteau
** File description:
** ant_one.c
*/

#include "../../includes/antman.h"

zip_t wrd(zip_t zip)
{
    struct stat st;
    stat(zip.arg.av[1], &st);
    zip.file.st_size = st.st_size;
    zip.file.fd = open(zip.arg.av[1], O_RDWR);
    if (zip.file.fd == -1) {
        zip.exit = 84;
        return zip;
    }
    zip.file.buffer = malloc(sizeof(char) * zip.file.st_size);
    read(zip.file.fd, zip.file.buffer, zip.file.st_size);
    return zip;
}

zip_t ant(zip_t zip)
{
    zip = wrd(zip);
    my_printf("%s", zip.file.buffer);
    return zip;
}
