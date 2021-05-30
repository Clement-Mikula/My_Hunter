/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

void create_sprite(object_t *object, char *filepath, sfVector2f scale)
{
    object->sprite = sfSprite_create();
    object->texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(object->sprite, object->texture, sfTrue);
    sfSprite_setScale(object->sprite, scale);
}