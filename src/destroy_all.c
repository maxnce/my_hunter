/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** destroy_all
*/

#include "../include/my_hunter.h"

void destroy_all(sfRenderWindow *window, texture_t *images, misc_t *misc)
{
    sfTexture_destroy(images->bgt);
    sfTexture_destroy(images->visort);
    sfTexture_destroy(images->duckt);
    sfSprite_destroy(images->bgs);
    sfSprite_destroy(images->ducks);
    sfSprite_destroy(images->visors);
    sfMusic_stop(misc->bgmusic);
    sfMusic_destroy(misc->bgmusic);
    sfMusic_destroy(misc->hit);
    sfMusic_destroy(misc->shot);
    sfClock_destroy(misc->mvm);
    sfClock_destroy(misc->anm);
    sfRenderWindow_close(window);
    sfRenderWindow_destroy(window);
}