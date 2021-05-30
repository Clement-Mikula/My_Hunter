/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

void game_loop(game_t *game)
{
    sfTime time;
    float seconds = 0;
    sfVector2f moveduck = {7, 0};

    while (sfRenderWindow_isOpen(game->window))
    {
        sfRenderWindow_clear(game->window, sfCyan);
        poll_event(game, game->event);
        sfRenderWindow_drawSprite(game->window, game->background.sprite, NULL);
        sfRenderWindow_drawSprite(game->window, game->character.sprite, NULL);
        time = sfClock_getElapsedTime(game->clock);
        seconds = time.microseconds / 1000000.0;
        fly_duck(game, game->clock, seconds);
        sfSprite_move(game->character.sprite, moveduck);
        sfRenderWindow_display(game->window);
    }
    sfClock_destroy(game->clock);
}

void loop(game_t *game)
{
    game->character.rect = (sfIntRect){0, 0, 110, 110};
    game->clock = sfClock_create();

    create_sprite(&(game->background), "assets/background.png", (sfVector2f){2, 1.56});
    create_sprite(&(game->character), "assets/duck.png", (sfVector2f){2, 2});
    sfSprite_setTextureRect(game->character.sprite, game->character.rect);

    game_loop(game);
}