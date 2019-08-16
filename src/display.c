/*
** EPITECH PROJECT, 2018
** display.c
** File description:
** display.c
*/

#include <SFML/Graphics.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

sfVector2f display(object_t object, sfVector2f position, sfIntRect rect,
score_t *score)
{
    sfEvent event;

    sfSprite_setTexture(object.spritebg, object.texturebg, sfTrue);
    analyse_events(object.window, event, &position, score);
    sfSprite_setTexture(object.spritec, object.texturec, sfTrue);
    sfSprite_setTextureRect(object.spritec, rect);
    sfSprite_setPosition(object.spritec, position);
    sfRenderWindow_clear(object.window, sfBlack);
    sfRenderWindow_drawSprite(object.window, object.spritebg, NULL);
    sfRenderWindow_drawSprite(object.window, object.spritec, NULL);
    sfRenderWindow_display(object.window);
    return(position);
}
