/*
** EPITECH PROJECT, 2020
** B-BOO-101-PAR-1-1-phoenixd03-perry.chouteau
** File description:
** my_putchar.c
*/

#include <unistd.h>

// ce n'est pas fini //

void sorted_params(int ac, char **av)
{
    for(int ascii = 32; ascii < 128; ascii += 1)
        for (int i = 0; i < ac; i += 1) {
            if (av[i][0] == ascii)
                for (int j = 0; av[i][j] != '\0'; j += 1) 
                    write(1, &av[i][j], 1);
            write(1, "\n", 1);
        }
}

int main(int ac, char **av)
{
    sorted_params(ac, av);
    return 0;
}