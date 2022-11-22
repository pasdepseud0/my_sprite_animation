/*
** EPITECH PROJECT, 2021
** Framebuffer
** File description:
** creating a struct
*/

#include "struct.h"

#pragma once

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);

// void anim_rect(sfIntRect *rect, int offset, int max_value, sfClock *clock);

void init_window(window_t *window);
int displaywindsprite(sfRenderWindow *window, sfSprite *sprite,sfIntRect rect);

void init_thief(thief_t *sprite);
void disp_thief(window_t *window, thief_t *sprite);
void move_thief(thief_t *sprite, int offset, int max_value);

void init_floor(object_t *sprite);
object_t *create_floor(window_t *window, char *assets, int x);
void disp_floor(window_t *window, object_t **sprite, thief_t *chara);
void move_floor(object_t *sprite, int offset, int max_value);