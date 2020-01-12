/*
** EPITECH PROJECT, 2020
** sdqd
** File description:
** dfsd
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Text.h>
#include "../include/my.h"
#include "../include/structs.h"

void past_game()
{
    game_t tools;

    tools.modif_rect = 5;
    tools.score.point = 000;
    tools.quit = 0;
    tools.scene = 3;
    tools.anima.rect = (sfIntRect){0, 0, 170, 300};
    tools.menu.music_1 = sfMusic_createFromFile("Assets/song/Bipbip.wav")\
        ;
    tools.menu.music_2 = sfMusic_createFromFile("Assets/song/hunter.ogg")\
        ;
    tools.music_3 = sfMusic_createFromFile("Assets/song/hunter-game.ogg")\
        ;
    sfMusic_play(tools.menu.music_2);
    sfMusic_setLoop(tools.menu.music_2, sfTrue);
    game(&tools);
    sfMusic_destroy(tools.menu.music_1);
    sfMusic_destroy(tools.menu.music_2);
    sfMusic_destroy(tools.music_3);
}
