/*
** EPITECH PROJECT, 2020
** B-MUL-mydefender-perry.chouteau
** File description:
** sound.h
*/

#include "csfml.h"

#ifndef CSFML_SOUND_H
#define CSFML_SOUND_H

typedef struct
{
    sfSound *sound;
    sfSoundBuffer *buf;
    float volume;
}sound_t;

#endif