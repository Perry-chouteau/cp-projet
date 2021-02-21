/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    }
    else {
        my_putchar('N');
    }
    my_putchar('\n');
}
