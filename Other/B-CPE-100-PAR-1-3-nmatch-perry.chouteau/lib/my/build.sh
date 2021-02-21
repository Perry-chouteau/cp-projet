#!/usr/bin/env bash
##
## EPITECH PROJECT, 2020
## build.sh
## File description:
## compilate .c and build lib my.a
##

gcc -c *.c
ar rc libmy.a *.o
