/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** close_window
*/

#include "../include/my_hunter.h"

void event_window(sfEvent event, sfRenderWindow *window, misc_t *misc)
{
    if (event.type == sfEvtClosed || (event.type == sfEvtKeyPressed
        && event.key.code == sfKeyEscape))
        sfRenderWindow_close(window);
    if (event.type == sfEvtMouseButtonPressed
        && event.mouseButton.button == sfMouseLeft)
            play_pew(misc);
}