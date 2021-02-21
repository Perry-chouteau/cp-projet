/*
** EPITECH PROJECT, 2020
** pokeball
** File description:
** pokeball 9x9
*/

#include <unistd.h>
void my_putchar(char c)
{
    write(1,&c,1);
}

void main()
{
    int i;
    int b;
    for( i = 0; i < 10 ;i += 1) {
        if(i == 1 || i == 9) {
            my_putchar(' ');
            for(b=0;b < 7;b += 1)
                my_putchar('o');
            my_putchar(' ');my_putchar('\n');
        }
        if(i > 1 && i < 3 || i > 5 && i < 7){
            my_putchar('o');
            for(b=0; b < 4; b += 1)
                my_putchar(' ');
            my_putchar('o');
            for(b=0; b < 4;b += 1)
                my_putchar(' ');
            my_putchar('o');my_putchar('\n');
        }
        if(i == 4 || i == 6){
            my_putchar('o');
            for(b=1;b > 0 && b < 5 || b>5 && b<9 ;b+=1){
                my_putchar(' ');
            }
        }            
        
        if(i == 5)
            write(1,"oooo oooo\n",10);
        if(i> 1 && i<4 || i>6 && i<9)
            write(1,"o       o\n",10);
    }
}
