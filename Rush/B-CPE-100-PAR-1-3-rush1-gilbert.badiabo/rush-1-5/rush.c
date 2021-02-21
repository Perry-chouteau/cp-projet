/*
** EPITECH PROJECT, 2020
** rush 1-2
** File description:
** write square
*/

#include <unistd.h>

char my_putchar(char c);

void xy_egal_1(int x, int y)
{
    if(x == y)
        write(1,"B\n",2);

}

void y_egal_1(int x, int y, int temp_x, int temp_y)
{
    if(temp_y == 1) {
        while(temp_x > 0) {
            my_putchar('B');
            temp_x -= 1;
        }
        my_putchar('\n');
    }  
}

void x_egal_1(int x, int y, int temp_x, int temp_y)
{
    if(temp_x == 1 ) {
        while(temp_y > 0) {
            my_putchar('B');
            my_putchar('\n');   
            temp_y -= 1;
        }
        
    }
}

void firla_st_line( int x, int y, int temp_x, int temp_y)
{
    if(temp_y == y || temp_y == 1) {
        while(temp_x > 0) {
            if(temp_y == y){
                if(temp_x == x)
                    my_putchar('A');
                if(temp_x < x -1) {
                    if(x != y)
                        my_putchar('B');
                    else
                        my_putchar('B');
                }    
            
                if(temp_x == 1) {
                    my_putchar('C');
                    my_putchar('\n');
                }
            }
            if(temp_y == 1) {
                if(temp_x == x)
                    my_putchar('C');
                if(temp_x < x -1)
                    if(x != y)
                        my_putchar('B');
                    else
                        my_putchar('B');
                if(temp_x == 1) {
                    my_putchar('A');
                    my_putchar('\n');
                }
            }
            temp_x -= 1;
        }
    }
}
    
void midle_line(int x, int y, int temp_x, int temp_y)
{
    if(temp_y < y && temp_y > 1 ) {
        while(temp_x > 0) {
            if(temp_x == x){
                if(x != y)
                    my_putchar('B');
                else
                    my_putchar('B');
            }
            if(temp_x < x -1)
                my_putchar(' ');
            if(temp_x == 1) {
                if(x != y)
                    my_putchar('B');
                else
                    my_putchar('B');
            }
            temp_x -= 1;
        }
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    int temp_x = x;
    int temp_y = y;
    
    if(x <= 0 || y <= 0)
        write(2,"Invalid size\n",13);
    if(x == 1 && y == 1)
        xy_egal_1(x,y);
    if (y == 1 && x > 1 || x == 1 && y > 1 ) {
        y_egal_1(x,y,temp_x,temp_y);
        x_egal_1(x,y,temp_x,temp_y);
    }
    if(y > 1 && x > 1) {
        while(temp_y > 0) {
            firla_st_line(x,y,temp_x,temp_y);
            temp_x = x;
            midle_line(x,y,temp_x,temp_y);
            temp_x = x;
            temp_y -= 1;
        }
    }
}
