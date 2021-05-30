/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

sfRenderWindow *create_window(char *windowname)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, windowname, sfResize | sfClose, NULL);

    sfRenderWindow_setVerticalSyncEnabled(window, sfTrue);
    return window;
}