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

#ifndef CSFML_SOUND_H
#define CSFML_SOUND_H

typedef struct
{
    sfSound *sound;
    sfSoundBuffer *buf;
    float volume;
}sound_t;

#endif