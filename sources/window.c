/*
** EPITECH PROJECT, 2021
** window.c
** File description:
** display a window
*/

#include "my.h"

void init_window(window_t *window)
{
        window->mode.height = 768;
        window->mode.width = 1366;
        window->mode.bitsPerPixel = 32;
        window->window = sfRenderWindow_create(window->mode, " My Runner ", sfResize | sfClose, NULL);
        sfRenderWindow_setFramerateLimit(window->window, 7);
}

int displaywindsprite(sfRenderWindow *window, sfSprite *sprite,sfIntRect rect)
{
        sfSprite_setTextureRect(sprite, rect);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);

        return 0;
}