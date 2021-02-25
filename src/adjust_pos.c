/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** adjust_pos
*/

#include "../include/my_hunter.h"

sfVector2f adjust_pos(sfVector2f pos)
{
    sfVector2f pos2;

    pos2.x = pos.x;
    pos2.y = pos.y;
    if (pos.x >= 1920) {
        pos2.x = -110;
        pos2.y = rand() % 1000;
    }
    if (pos.y <= 0)
        pos2.y = 1;
    if (pos.y > 1000)
        pos2.y = 1000;
    return (pos2);
}