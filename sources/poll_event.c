/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

void poll_event(game_t *game, sfEvent event)
{
    while (sfRenderWindow_pollEvent(game->window, &event))
        {
            if (event.type == sfEvtClosed)
            {
                sfRenderWindow_close(game->window);
            }
            click_duck(event, game);
        }
}