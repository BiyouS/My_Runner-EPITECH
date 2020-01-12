/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** my_hunter
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Text.h>
#include "../include/my.h"
#include "../include/structs.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h')
        arg_h();
    else {
        past_game();
    }
    return (0);
}
