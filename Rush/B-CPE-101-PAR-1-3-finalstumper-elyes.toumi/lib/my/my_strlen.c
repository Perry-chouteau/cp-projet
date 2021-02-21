/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** emacs
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int n;

    n = 0;
    while (str[n] != '\0') {
        n++;
    }
    return (n);
}
