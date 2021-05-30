/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

void fly_duck(game_t *game, sfClock *clock, float seconds)
{
    if (seconds > 0.18) {
        game->character.rect.left += 110;
        if (game->character.rect.left >= 330) {
            game->character.rect.left = 0;
        }
        sfSprite_setTextureRect(game->character.sprite, game->character.rect);
        sfClock_restart(clock);
    }
}