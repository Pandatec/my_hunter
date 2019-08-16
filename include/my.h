/*
** EPITECH PROJECT, 2017
** Piscine my.h
** File description:
** Hugo Courthias <hcourthias>
*/
#include <stdarg.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include "struct.h"
#include <stdlib.h>

#ifndef	__MY_H__
#define __MY_H__

sfVector2f display(object_t object, sfVector2f position, sfIntRect rect,
                   score_t *score);
void move_rect(sfIntRect *, int, int);
sfIntRect set_rect(sfIntRect);
int set_position(sfVector2f *, sfIntRect *, int);
sfVector2f set_pos(sfVector2f);
score_t ini_score(void);
void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *position,
                        sfRenderWindow *window, score_t *score);
void analyse_events(sfRenderWindow *window, sfEvent event,
                    sfVector2f *position, score_t *score);

#endif /*__MY_H__*/
