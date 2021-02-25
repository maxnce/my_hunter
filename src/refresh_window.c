/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** refresh_window
*/

#include "../include/my_hunter.h"

void refresh_window(sfRenderWindow *window, texture_t *images, misc_t *misc)
{
    update_hp(images, misc);
    sfSprite_setTextureRect(images->ducks, images->dsize);
    sfSprite_setTextureRect(images->hps, images->hpd);
    sfSprite_setTextureRect(images->bgs, images->bgsize);
    sfSprite_setPosition(images->hps, (sfVector2f){1700, 50});
    sfSprite_setPosition(images->ducks, misc->dp);
    sfSprite_setTextureRect(images->visors, images->vsize);
    sfSprite_setPosition(images->visors, misc->vp);
    sfSprite_setScale(images->visors, misc->vscale);
    sfRenderWindow_drawSprite(window, images->bgs, NULL);
    sfRenderWindow_drawSprite(window, images->ducks, NULL);
    sfRenderWindow_drawSprite(window, images->visors, NULL);
    sfRenderWindow_drawSprite(window, images->hps, NULL);
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, misc->cl);
}