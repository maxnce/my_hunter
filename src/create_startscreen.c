/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** create_startscreen
*/

#include "../include/my_hunter.h"

void create_startscreen(texture_t *images)
{
    images->prest = sfTexture_createFromFile("pres.png", NULL);
    images->press = sfSprite_create();
    sfSprite_setTexture(images->press, images->prest, sfFalse);
    images->quitt = sfTexture_createFromFile("quit.png", NULL);
    images->quits = sfSprite_create();
    sfSprite_setTexture(images->quits, images->quitt, sfFalse);
    images->startt = sfTexture_createFromFile("start.png", NULL);
    images->starts = sfSprite_create();
    sfSprite_setTexture(images->starts, images->startt, sfFalse );
    images->hpt = sfTexture_createFromFile("hps.png", NULL);
    images->hps = sfSprite_create();
    images->hpd = (sfIntRect){80, 80, 120, 40};
    sfSprite_setTexture(images->hps, images->hpt, sfFalse);
    sfSprite_setTextureRect(images->hps, images->hpd);
}