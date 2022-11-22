/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "my.h"

int main(void)
{
    window_t *window = malloc(sizeof(window_t));
    bird_t *sprite = malloc(sizeof(bird_t));

    init_window(window);
    init_bird(sprite);

    if (!window->window)
        return(84);

    while (sfRenderWindow_isOpen(window->window)) {
        while (sfRenderWindow_pollEvent(window->window, &window->event)) {
            if (window->event.key.code == sfKeyEscape)
                sfRenderWindow_close(window->window);
            if (window->event.type == sfEvtClosed)
                sfRenderWindow_close(window->window);
        }
        sfRenderWindow_clear(window->window, sfBlack);
        disp_bird(window, sprite);

        ani_bird(sprite, 34, 100);
        sfRenderWindow_display(window->window);
    }
    free(sprite);
    sfRenderWindow_destroy(window->window);
    free(window);
    return 0;
}