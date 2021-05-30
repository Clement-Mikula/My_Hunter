/*
** EPITECH PROJECT, 2020
** 0
** File description:
** 0
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        write(1, "    \\__--/DUCK HUNT\\--__/\n\n           CONTROL   \n-left click to shoot the duck\n\n", 81);
        return 0;
    }
    else
    {
    game_t game;
    game.window = create_window("My_Hunter");
    loop(&game);
    destroy_all(&game);
    return 0;
    }
}