/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** animations
*/

#include "../include/my_hunter.h"

void animations(misc_t *misc, texture_t *images)
{
    misc->anmt = sfClock_getElapsedTime(misc->anm);
    misc->mvmt = sfClock_getElapsedTime(misc->mvm);
    misc->anms = misc->anmt.microseconds / 1000000.0;
    misc->mvms = misc->mvmt.microseconds / 1000000.0;
    if (misc->anms > 0.1) {
        move_rect(&images->dsize, 110, 330);
        sfClock_restart(misc->anm);
    }
    if (misc->mvms > (0.15 / (misc->needsc / 2.0))) {
        misc->dp.x += rand() % 15 + 10;
        misc->dp.y += rand() % 50 - 25;
        sfSprite_setPosition(images->ducks, misc->dp);
        sfClock_restart(misc->mvm);
    }
    misc->dp = adjust_pos(misc->dp);
}