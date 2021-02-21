/*
** EPITECH PROJECT, 2020
** fir tree
** File description:
** fir tree with the size you give
*/

#include<unistd.h>

void my_putchar(char c);
{
    write(1,&c,1);
}

void tree(int size)
{
    int temp_width;
    int temp_height; 
    int space;
    
    for(temp_width = size * 3 + 1; temp_width > 0; temp_whidth -= 1) {
        for(temp_heigth = size * 4 + (size -1); space = 3; temp_heigh>0 ; temp_height -= 1) {
            if(temp_heigth  < )
                my_putchar(' ');
            if(temp_heigth <= 1 && space != temp
               my_putchar'*');
            if(space <= -3)
                ;
        }
    }
}
