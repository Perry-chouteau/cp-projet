/*
** EPITECH PROJECT, 2020
** B-MUL-200-PAR-2-1-mydefender-tibo.pendino
** File description:
** music.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef MUSIC_H
#define MUSIC_H

typedef struct
{
    sfMusic *music;
    float volume;
}music_t;

#endif