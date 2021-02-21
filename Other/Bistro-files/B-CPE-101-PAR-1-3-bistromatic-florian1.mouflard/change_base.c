/*
** EPITECH PROJECT, 2020
** change_base
** File description:
** Change the given base into a base of 10
*/

#include <unistd.h>
#include "include/my.h"
#include <stdio.h>
#include "bistromatic.h"
#include <stdlib.h>

char *reconv_base(char *str, char *base)
{
    int i = 0;
    int x = 0;
    char *result = malloc(sizeof(char) * 10);

    while (str[i] != '\0') {
        x = str[i] - 48;
        str[i] = base[x];
        i = i + 1;
    }
    return str;
}

char *conv_base(char *base, int result, int len)
{
    int mult = 0;
    int result2 = result;
    char *str = malloc(sizeof(char) * 10 - 1);
    int i = 0;

    while (result > my_compute_power_rec(len,mult))
        mult = mult + 1;
    mult = mult - 1;
    for (int mod = result; mod > 0;) {
        result = mod / my_compute_power_rec(len,mult);
        mod = result2 % my_compute_power_rec(len,mult);
        str[i] = result + 48;
        result2 = mod;
        mult = mult - 1;
        i = i + 1;
    }
    str[i] = '\0';
    return str;
}

char *conv_op(char *str, char *op, char *base)
{
    char *copy_op = my_strdup(op);
    char operation[] = "()+-*/%";
    int x = 0;

    for (int i = 0; str[i] != '\0';) {
        if (str[i] != copy_op[x])
            x = x + 1;
        if (str[i] == copy_op[x]) {
            str[i] = operation[x];
            i = i + 1;
            x = 0;
        }
        if (str[i] == base[x]) {
            i = i + 1;
            x = 0;
        }
    }
    return str;
}

char *conv_base_to_ten(char *str, char *base, char *op, char *len)
{
    char base_ten[] = "0123456789";
    int x = 0;
    char *copy_base = my_strdup(base);
    int result = 0;

    for (int i = 0; str[i] != '\0';) {
        if (str[i] != copy_base[x])
            x = x + 1;
        if (str[i] == copy_base[x]) {
            str[i] = base_ten[x];
            i = i + 1;
            x = 0;
        }
        if (str[i] == op[x]) {
            i = i + 1;
            x = 0;
        }
    }
    str = conv_op(str,op,base_ten);
    result = parse_summands(str);
    my_putstr(reconv_base(conv_base(base,result,my_strlen(base)),copy_base));
    return str;
}

int error_handling(char *op, int ac, char *base)
{
    if (my_strlen(op) != 7) {
        write(2,"syntax error",13);
        return 1;
    }
    if (ac != 4) {
        write(2,"syntax error",13);
        return 1;
    }
    if (my_strlen(base) < 2) {
        write(2,"syntax error",13);
        return 1;
    }
    return 0;
}
int main(int ac, char **av)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len = read(0,buff + offset,BUFF_SIZE - offset);
    int result = 0;

    if (len < 0)
        return 84;
    while (len > 0) {
        offset = offset + len;
        len = read(0,buff + offset,BUFF_SIZE - offset);
    }
    buff[offset] = '\0';
    if (error_handling(av[2],ac,av[1]) > 0)
        return 84;
    conv_base_to_ten(my_strdup(buff),av[1],my_strdup(av[2]),av[3]);
    return 0;
}
