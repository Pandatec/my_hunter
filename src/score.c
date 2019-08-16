/*
** EPITECH PROJECT, 2018
** score.c
** File description:
** score
*/

#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/struct.h"
#include "../include/my.h"

score_t ini_score(void)
{
    score_t score;

    score.score = 0;
    score.life = 4;
    score.i = 4;
    return (score);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

score_t *my_put_nbr(score_t *score)
{
    if (score->score >= 9)
        my_putchar(score->score + 48);
    else {
        score->score = score->score / 10;
        my_put_nbr(score);
        score->score = (score->score % 10 + 48);
        my_putchar(score->score);
    }
    return (0);
}

void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *position,
sfRenderWindow *window, score_t *score)
{
    if (event.x >= position->x && event.x <= position->x + 110 &&
        event.y >= position->y && event.y <= position->y + 110) {
        position->x = -199;
        position->y = rand() % 400 + 10;
        score->score = score->score + 1;
        score->i += 1;
    } else if (score->life > 0) {
        score->life = score->life - 1;
    }
    if (score->life == 0) {
        sfRenderWindow_close(window);
        printf("score final : %d\n", score->score);
    }
}
