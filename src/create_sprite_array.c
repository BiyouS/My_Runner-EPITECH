/*
** EPITECH PROJECT, 2019
** array of sprite
** File description:
** array of sprite
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include "../include/structs.h"

extern const int NB_ASSETS;
extern const char *FILEPATHS[];
extern const int NB_ASSETS_PARALLAX;

static sprite_t *create_sprite(char const *name, int i)
{
    sprite_t *sprite = malloc(sizeof(sprite_t));

    sprite->sprite = sfSprite_create();
    sprite->texture = sfTexture_createFromFile(name, NULL);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfFalse);
    if (i >= NB_ASSETS_PARALLAX) {
        sfSprite_setScale(sprite->sprite, (sfVector2f){3.75f, 3.75f});
    }
    return (sprite);
}

sprite_t **create_sprite_array(void)
{
    sprite_t **sprite_array = malloc(sizeof(sprite_t *) * NB_ASSETS);
    int i = 0;

    for (; i < NB_ASSETS; i++)
        sprite_array[i] = create_sprite(FILEPATHS[i], i);
    return (sprite_array);
}
