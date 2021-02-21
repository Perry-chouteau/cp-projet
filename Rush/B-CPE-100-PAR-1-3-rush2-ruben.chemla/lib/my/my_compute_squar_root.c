/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** fonction returns the square root of the parametre number
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    int y = 0;

    if (i > nb)
        return (0);

    while (i != nb) {
        y = i * i;

        if (y == nb)
            return (i);
        else if (y > nb)
            return (0);

        i = i + 1;
    }
    return (y);
}
