/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>


int main(int ac, char **av)
{
    int fd;
    int i = 1;
    char buffer[30000];
    int n = 0;
    
    while (i != ac) {
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            my_putstr("Error with opn\n");
            return (84);
        }
        read(fd, buffer, 30000);
        my_putstr(buffer);
        while (n < 30000) {
            buffer[n] = '\0';
            n += 1;
        }
        i += 1;
    }
    close(fd);
    return (0);
}
