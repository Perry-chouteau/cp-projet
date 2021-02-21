#!/usr/bin/env bash
##
## EPITECH PROJECT, 2020
## build and libmy.a
## File description:
## 
##

gcc -c *.c
ar rc libmy.a *.o
