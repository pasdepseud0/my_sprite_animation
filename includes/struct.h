/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** struct
*/

#include <SFML/Audio.h>
#include <SFML/System.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>

#pragma once

#ifndef MY_H_

    #define MY_H_


typedef struct window_st //fenetre
{
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent event;

}window_t;

typedef struct thief_st //perso
{
    sfIntRect rect;
    sfTexture *texture;
    sfVector2f scale;
    sfSprite *chara;
    sfVector2f pos;

}thief_t;

typedef struct   //sol
{

    sfIntRect rect_envir;
    sfTexture *txt_envir;
    sfVector2f scale_envir;
    sfSprite *floor;
    sfVector2f pos;

}object_t;

#endif