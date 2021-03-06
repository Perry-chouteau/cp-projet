/*
** EPITECH PROJECT, 2020
** match
** File description:
** find out if two strings match
*/

#include <stdio.h>

int recurssive (char *s1_cp, char *s2_cp, int i)
{   
    if (*s1_cp == *s2_cp && *s1_cp != '\0')
        return (recurssive(s1_cp + 1, s2_cp+ 1));
    if (*s1_cp == *s2_cp && *s1_cp == '*' && *s1_cp != '\0')
        return (recurssive(s1_cp + 1, s2_cp + 1));
    if (*s1_cp == '*' && *s1_cp != *s2_cp && *s2_cp != '\0')
        return(recurssive(s1_cp, s2_cp + 1));
    if (*s2_cp == '*' && *s1_cp != *s2_cp && *s1_cp != '\0')
        return (recurssive(s2_cp, s1_cp + 1));
    if ((*s1_cp && *s2_cp) == '\0')
        return 1;
    if (*s1_cp != *s2_cp && (*s1_cp || *s2_cp) != '*')
        return 0;
}

char *my_str_cp (char *dest,char *src)
{
    int i;

    for ( i = 0; src[i] != '\0'; i += 1)
        dest[i] = src[i];
    dest[i]  = '\0';
    return dest;
}

int match (char  const *s1 , char  const *s2)
{
    int i = 0;
    int y_or_n;
    char *s1_cp;
    char *s2_cp;
 
    s1_cp[] = my_str_cp(s1_cp, s1);
    s2_cp[] = my_str_cp(s2_cp, s2);
    y_or_n = match(s1_cp, s2_cp,i);
    return y_or_n;
}

void main ()
{
    char s1[] = "Bonjour je m'apelle Perry";
    char s2[] = "Bonjour je m'apelle Perry";
    match(s1,s2);
}
