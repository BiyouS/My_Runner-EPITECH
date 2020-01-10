/*
** EPITECH PROJECT, 2020
** parallax
** File description:
** parallax.c
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/structs.h"

extern const int NB_ASSETS;
extern const float VEC_Y_D;
extern const float VEC_X_D;
extern const float FRAME_BY_S;
extern const float FRAME_BY_S_2;
extern const float SECONDS;
extern const float SCALE_PARALLAX;

void display_parallax(game_t *t)
{
    const float SIZE = 384.0f * SCALE_PARALLAX;
    sfSprite *sprite;
    sfVector2f pos;
    static bool firstpass = true;

    for (int i = 8; i != NB_ASSETS; i++) {
        sprite = t->sprite[i]->sprite;
        pos = sfSprite_getPosition(sprite);
        if (i == NB_ASSETS - 1 && firstpass)
            sfSprite_setPosition(sprite, (sfVector2f){0, 675});
        sfSprite_move(sprite, (sfVector2f){((NB_ASSETS - i) * -0.25f), 0});
        sfRenderWindow_drawSprite(t->window, sprite, NULL);
        sfSprite_move(sprite, (sfVector2f){SIZE, 0});
        sfRenderWindow_drawSprite(t->window, sprite, NULL);
        sfSprite_move(sprite, (sfVector2f){-SIZE, 0});
        if (pos.x < -SIZE)
            sfSprite_move(sprite, (sfVector2f){SIZE, 0});
    }
    firstpass = false;
}
