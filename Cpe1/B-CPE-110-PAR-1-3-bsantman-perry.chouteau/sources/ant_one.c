/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bsantman-perry.chouteau
** File description:
** ant_one.c
*/

#include "../includes/antman.h"

zip_t ant_one(zip_t zip)
{
    struct stat *stats;
    stat(zip.arg.av[1], stats);
    if (zip.file.fd = -1) {
        zip.exit = 84;
        return zip;
    }
    zip.file.fd = open(zip.arg.av[1], O_RDONLY);
    read(zip.file.fd, zip.file.buffer, stats->st_size);
    return zip;
}