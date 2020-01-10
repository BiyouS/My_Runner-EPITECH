/*
** EPITECH PROJECT, 2020
** score
** File description:
** score
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Text.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/structs.h"

void score_up(game_t *t)
{
    t->score.point += 1;
    if (t->score.point >= 10000) {
        t->scene = 3;
        t->score.point = 0;
    }
}
