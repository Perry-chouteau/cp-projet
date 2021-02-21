/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-3-bspushswap-perry.chouteau
** File description:
** two_list.c
*/

#include "../includes/linked_list.h"

int main(int ac, char **av)
{
    cell_t **list = malloc(sizeof(cell_t *));
    list[0] = empty_list();
    my_printf("************1***********\n");
    add_at(list, 10, -1);
    add_at(list, 23, 5);
    print_list(list);
    my_printf("************2***********\n");
    my_printf("%i\n", get_at(list, -1));
    my_printf("%i\n", get_at(list, 5));
    my_printf("************3***********\n");
    set_at(list, -31, -1);
    set_at(list, 44, 5);
    print_list(list);
    my_printf("************4***********\n");
    free_at(list, 0);
    free_at(list, 0);
    print_list(list);
    my_printf("************5***********\n");
    add_at(list, -11, -1);
    add_at(list, 25, 5);
    my_printf("%i\n", len_list(list));
    my_printf("************6***********\n");
    free_list(list);
    print_list(list);
    my_printf("************7***********\n");
    free_list(list);
    print_list(list);
    return 0;
}