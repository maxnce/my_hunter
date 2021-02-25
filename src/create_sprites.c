/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** create_sprites
*/

#include "../include/my_hunter.h"

texture_t create_sprites(void)
{
    texture_t images;
    sfIntRect ds = {0, 0, 110, 110};
    sfIntRect vs = {0, 0, 289, 289};
    sfIntRect bs = {0, 0, 1920, 1080};

    images.duckt = sfTexture_createFromFile("spritesheet.png", NULL);
    images.bgt = sfTexture_createFromFile("bg2.png", NULL);
    images.visort = sfTexture_createFromFile("visor.png", NULL);
    images.ducks = sfSprite_create();
    images.bgs = sfSprite_create();
    images.visors = sfSprite_create();
    images.bgsize = bs;
    images.vsize = vs;
    images.dsize = ds;
    sfSprite_setTexture(images.ducks, images.duckt, sfFalse);
    sfSprite_setTexture(images.bgs, images.bgt, sfFalse);
    sfSprite_setTexture(images.visors, images.visort, sfFalse);
    create_startscreen(&images);
    return (images);
}