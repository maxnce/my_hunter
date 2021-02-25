/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** move_and_shoot
*/

#include "../include/my_hunter.h"

void move_and_shoot(sfEvent *evt, misc_t *misc)
{
    if (evt->type == sfEvtMouseButtonPressed &&
    evt->mouseButton.button == sfMouseLeft &&
        evt->mouseButton.x >= misc->dp.x &&
        evt->mouseButton.x <= misc->dp.x + 110 &&
        evt->mouseButton.y >= misc->dp.y &&
        evt->mouseButton.y <= misc->dp.y + 110) {
        misc->sc++;
        evt->mouseButton.x = -5;
        evt->mouseButton.y = -5;
        misc->dp.x = -110;
        misc->dp.y = rand() % 1000;
        misc->pts += (1 * misc->needsc);
        play_oof(misc);
        write(1, "You have ", 10);
        my_put_nbr(misc->pts);
        write(1, " points !\n", 11);
    }
    update_mouse(evt, misc);
}