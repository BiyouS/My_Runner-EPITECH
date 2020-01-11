/*
** EPITECH PROJECT, 2019
** eventgest
** File description:
** gestion events
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Text.h>
#include <stdbool.h>
#include "../include/my.h"
#include "../include/structs.h"

extern const int NB_ASSETS_D;
extern const float VEC_Y_D;
extern const float VEC_X_D;
extern const float FRAME_BY_S;
extern const float SECONDS;

static void manage_events(game_t *t)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace))
        t->modif_rect = 13;
}

int analyse_events_game(game_t *t)
{
    sfMusic_stop(t->menu.music_2);
    if (t->event.type == sfEvtKeyPressed)
        manage_events(t);
    if (t->event.type == sfEvtClosed)
        sfRenderWindow_close(t->window);
    return 0;
}
