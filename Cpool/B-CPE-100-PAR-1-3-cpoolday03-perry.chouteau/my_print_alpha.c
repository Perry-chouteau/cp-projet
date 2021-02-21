/*
** EPITECH PROJECT, 2020
** my_print_alpha
** File description:
** it print alphabet in order.
*/

#include <unistd.h>

char my_putchar(char c)
    
int my_print_alpha(void)
{
    char alpha;
    
    for (alpha = 'a'; alpha <= 'z'; alpha += 1)
        my_putchar(alpha);
}
