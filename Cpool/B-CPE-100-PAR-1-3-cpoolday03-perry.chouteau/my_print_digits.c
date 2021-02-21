/*
** EPITECH PROJECT, 2020
** my_print_digits
** File description:
** it print digits in order.
*/

#include <unistd.h>

void my_putchar(int c);

int my_print_digits(void)
{
    char digits;
    for (digits = '0'; digits <= '9'; digits += 1)
        my_putchar (digits);
}
