/*
** EPITECH PROJECT, 2020
** dip_stdarg.c
** File description:
** dip_stdarg.c
*/

#include <stdarg.h>
#include <unistd.h>

void put__char(char c)
{
    write(1,&c,1);
    return ;
}

int put_nbr(int nb)
{
    int begin;
    int end;
    int res;

    if (nb < 0) {
        nb *= -1;
        write(1,"-", 1);
    }
    if (nb >= 10)
        put_nbr(nb / 10);
    nb %= 10;
    nb += '0';
    write(1,&nb,1);
    
    return 0;
}

void disp_stdarg( char *s, ...)
{
    va_list list;
    char *string;
    int nb;

    va_start(list, s);
    for (int i = 0; s[i] != '\0'; i += 1) {
        if (s[i] == 's') {
            string = va_arg(list, char *);
            for (int j = 0;string[j] != '\0'; j += 1)
                write (1,&string[j],1);
        }
        if (s[i] == 'c')
            put__char(va_arg(list, int));

        if (s[i] == 'i')
            put_nbr( va_arg(list, int));
        put__char('\n');
    }
    va_end(list);    
}
