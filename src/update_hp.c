/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** update_hp
*/

#include "../include/my_hunter.h"

void update_hp(texture_t *img, misc_t *misc)
{
    if (misc->hp == 3)
        img->hpd.left = 80;
    if (misc->hp == 2)
        img->hpd.left = 40;
    if (misc->hp == 1)
        img->hpd.left = 0;
}