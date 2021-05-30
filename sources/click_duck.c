/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

void click_duck(sfEvent event, game_t *game)
{
    if (event.type == sfEvtMouseButtonPressed) {
        sfVector2f ducka = sfSprite_getPosition(game->character.sprite);
        sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window);
        if (mouse.x >= ducka.x && mouse.x <= ducka.x + 220 &&
         mouse.y >= ducka.y && mouse.y <= ducka.y + 220)
            sfSprite_move(game->character.sprite, (sfVector2f){0, -1000});
    }
}