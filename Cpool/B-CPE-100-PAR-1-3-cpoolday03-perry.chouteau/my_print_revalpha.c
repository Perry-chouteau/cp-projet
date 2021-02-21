/*
** EPITECH PROJECT, 2020
** my_print_revalpha
** File description:
** it print alphabet in reverse order.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
}

int my_print_revalpha(void)
{
    char revalpha;
    for (revalpha = 'z'; revalpha >= 'a'; revalpha -= 1)
        my_putchar(revalpha);
}

int main(void)
{
    my_print_revalpha();
    return(0);
}
