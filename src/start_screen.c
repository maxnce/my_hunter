/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** start_screen
*/

#include "../include/my_hunter.h"

void disp_start(sfRenderWindow *window, misc_t *misc, texture_t *img)
{
    sfVector2f pospress = {500, 100};
    sfVector2f posstarts = {675, 400};
    sfVector2f posquits = {666, 500};
    sfSprite_setPosition(img->press, pospress);
    sfSprite_setPosition(img->starts, posstarts);
    sfSprite_setPosition(img->quits, posquits);
    sfRenderWindow_drawSprite(window, img->starts, NULL);
    sfRenderWindow_drawSprite(window, img->quits, NULL);
    sfRenderWindow_drawSprite(window, img->press, NULL);
}

void start_screen(sfRenderWindow *window, misc_t *misc, texture_t *img)
{
    sfEvent event;
    while (misc->start == 0) {
        sfSprite_setTextureRect(img->bgs, img->bgsize);
        sfRenderWindow_drawSprite(window, img->bgs, NULL);
        disp_start(window, misc, img);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtKeyPressed && event.key.code
            == sfKeySpace) {
                misc->start = 1;
                return ;
            }
            if ((event.type == sfEvtKeyPressed && event.key.code
            == sfKeyEscape) || event.type == sfEvtClosed) {
                misc->start = 1;
                sfRenderWindow_close(window);
            }
        }
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, misc->cl);
    }
}