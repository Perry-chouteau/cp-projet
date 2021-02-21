/*
** EPITECH PROJECT, 2020
** rush 3
** File description:
** rush 3
*/

int compare_nbr (char *buff)
{
    
    int i = 0;
    int result_i = 0;
    int result_j = 0;
    for (i = 0; buff[i] != '\0'; i + 1) {
        if (result_i < 1)
            result_j += 1;
        if (buff[i] == '\n')
            result_i += 1;
    }
    my_put_nbr(result_j);
    my_put_nbr(result_i)
    return 0;
}
