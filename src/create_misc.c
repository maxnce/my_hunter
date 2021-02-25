/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** create_misc
*/

#include "../include/my_hunter.h"

misc_t create_misc(void)
{
    misc_t misc;
    sfColor color = {0, 0, 0, 100};
    sfVector2f cursorpos = {-289, -289};
    sfVector2f pos = {0, 240};
    sfVector2f scale = {0.30, 0.30};

    misc.anm = sfClock_create();
    misc.mvm = sfClock_create();
    misc.bgmusic = sfMusic_createFromFile("bgmusic.ogg");
    misc.hit = sfMusic_createFromFile("ding.ogg");
    misc.shot = sfMusic_createFromFile("hit1.ogg");
    misc.cl = color;
    misc.dp = pos;
    misc.vp = cursorpos;
    misc.vscale = scale;
    misc.start = 0;
    game_values(&misc);
    sfMusic_play(misc.bgmusic);
    sfMusic_setLoop(misc.bgmusic, sfTrue);
    sfMusic_setVolume(misc.bgmusic, 25);
    return (misc);
}