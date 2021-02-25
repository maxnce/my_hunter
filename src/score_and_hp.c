/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** score_and_hp
*/

#include "../include/my_hunter.h"

void score_and_hp(sfRenderWindow *window, misc_t *misc)
{
    if (misc->sc == misc->needsc) {
        write(1, "Next level!\n", 13);
        misc->sc = 0;
        misc->needsc += 1;
        misc->hp = 3;
    }
    if (misc->hp == 0)
        sfRenderWindow_close(window);
}