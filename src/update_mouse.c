/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** update_mouse
*/

#include "../include/my_hunter.h"

void update_mouse(sfEvent *evt, misc_t *misc)
{
    if ((evt->type == sfEvtMouseButtonPressed &&
    evt->mouseButton.button == sfMouseLeft)
    && (evt->mouseButton.x != -5 && evt->mouseButton.y != -5)) {
        misc->hp -= 1;
        write(1, "You have ", 10);
        my_put_nbr(misc->hp);
        write(1, " lives remaining\n", 18);
        evt->mouseButton.x = -5;
        evt->mouseButton.y = -5;
    }
    if (evt->type == sfEvtMouseMoved) {
        misc->vp.x = evt->mouseMove.x - 33;
        misc->vp.y = evt->mouseMove.y - 33;
    }
    if (evt->type == sfEvtMouseButtonReleased &&
    evt->mouseButton.button == sfMouseLeft) {
        evt->mouseButton.x = NULL;
        evt->mouseButton.y = NULL;
    }
}