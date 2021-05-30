/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

void destroy_all(game_t *game)
{
    sfSprite_destroy(game->background.sprite);
    sfTexture_destroy(game->background.texture);
    sfSprite_destroy(game->character.sprite);
    sfTexture_destroy(game->character.texture);
    sfRenderWindow_destroy(game->window);
}
