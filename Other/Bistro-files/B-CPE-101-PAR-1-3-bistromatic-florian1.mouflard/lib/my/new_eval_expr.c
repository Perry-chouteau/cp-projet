/*
** EPITECH PROJECT, 2020
** copy of eval_expr
** File description:
** Calculate a string given
*/

#include "my.h"
#include "macro.h"

int i;

int check_if_negative(char *str)
{
    int neg = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg = neg + 1;
        i = i + 1;
    }
    neg = neg % 2;
    return neg;
}

int parse_number(char *str)
{
    int res = 0;
    int mult = 1;
    int neg = check_if_negative(str);

    while (str[i] >= '0' && str[i] <= '9')
        i = i + 1;
    for (int max = i - 1; str[max] >= '0' && str[max] <= '9'; max--) {
        res = (CTOI(str[max]) * mult) + res;
        mult = mult * 10;
    }
    if (str[i] == '(') {
        i = i + 1;
        res = parse_summands(str);
        i = i + 1;
    }
    if (neg != 0)
        res = res * -1;
    return res;
}

int parse_factors(char *str)
{
    int fac1 = 0;
    int fac2 = 0;
    char op = 0;

    fac1 = parse_number(str);
    while (str[i] == '*' || str[i] == '/' || str[i] == '%') {
        op = str[i];
        i = i + 1;
        fac2 = parse_number(str);
        if (op == '*')
            fac1 = fac1 * fac2;
        if (op == '/') {
            fac1 = fac1 / fac2;
        }
        if (op == '%') {
            fac1 = fac1 % fac2;
        }
    }
    return fac1;
}

int parse_summands(char *str)
{
    int fac1 = 0;
    int fac2 = 0;
    char op = 0;

    fac1 = parse_factors(str);
    while (str[i] == '+' || str[i] == '-') {
        op = str[i];
        i = i + 1;
        fac2 = parse_factors(str);
        if (op == '+')
            fac1 = fac1 + fac2;
        if (op == '-')
            fac1 = fac1 - fac2;
    }
    return fac1;
}
