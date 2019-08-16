/*
** EPITECH PROJECT, 2018
** rect-pos.c
** File description:
** move the picture
*/

#include <SFML/Graphics.h>
#include <time.h>
#include "../include/struct.h"
#include <stdlib.h>
#include "../include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

sfIntRect set_rect(sfIntRect rect)
{
    rect.top = 0;
    rect.left = 0;
    rect.width = 120;
    rect.height = 121;
    return (rect);
}

int set_position(sfVector2f *position, sfIntRect *rect, int i)
{
    position->x += i;
    if (position->x >= 1800) {
        rect->top = 110;
        i = 0;
    }
    if (position->x <= -200) {
        rect->top = 0;
        i = 0;
    }
    return (i);
}

sfVector2f set_pos(sfVector2f position)
{
    position.x = -200;
    position.y = rand() % 400 + 10;
    return (position);
}
