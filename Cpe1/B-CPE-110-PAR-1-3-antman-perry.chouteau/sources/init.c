/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-antman-perry.chouteau
** File description:
** init.c
*/

#include "../includes/antman.h"

void describe(void)
{
    my_printf("==================== USAGE =============================\n\n");
    my_printf("----------------Compressed file-------------------------\n");
    my_printf("./antman/antman \ttext.lyr 1\t\t|text\n");
    my_printf("./antman/antman \tweb_link.html 1\t\t|html\n");
    my_printf("./antman/antman \tpicture.ppm 1\t\t|picture\n");
    my_printf("\n");
    my_printf("----------------Decompressed file-----------------------\n");
    my_printf("./giantman/giantman\tcompressed.data 1\t|text\n");
    my_printf("./giantman/giantman\tcompressed.data 2\t|html\n");
    my_printf("./giantman/giantman\tcompressed.data 3\t|picture\n");
    my_printf("\n");
    my_printf("================= DESCRIPTION ==========================\n");
    my_printf("Compressed or Decompressed file\n\n");
}

zip_t init(zip_t zip, int ac, char **av)
{
    zip.arg.ac = ac;
    zip.arg.av = av;
    zip.exit = 0;
    zip.space = 1;
    return zip;
}