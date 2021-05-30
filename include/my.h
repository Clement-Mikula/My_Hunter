/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <unistd.h>

typedef struct object_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
} object_t;

typedef struct game_s {
    sfRenderWindow *window;
    object_t background;
    object_t character;
    sfClock *clock;
    sfEvent event;
} game_t;

void click_duck(sfEvent event, game_t *game);
void create_sprite(object_t *object, char *filepath, sfVector2f scale);
sfRenderWindow *create_window(char *windowname);
void destroy_all(game_t *game);
void loop(game_t *game);
void fly_duck(game_t *game, sfClock *clock, float seconds);
void poll_event(game_t *game, sfEvent event);
