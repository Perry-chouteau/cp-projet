/* /\* */
/* ** EPITECH PROJECT, 2020 */
/* ** my_print_comb */
/* ** File description: */
/* ** Say number without take 2times same digit in same number,and never use 3same digit in diferent number. */
/* *\/ */

#include<unistd.h>

#include<stdio.h>

char my_putchar (char c);

int if_ab_bc (void)
{
    if(a < b && b < c) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb (void)
    {
        char a = '0';
        char b = '1';
        char c = '2';

        while(a <= '7') {
            while(b <= '8') {
                while(c <= '9') {
                    if_ab_bc();
                    c += 1;
                }
                c = b + 1;
                b += 1;
            }
            b = a + 1;
            a += 1;
        }
    }
}
