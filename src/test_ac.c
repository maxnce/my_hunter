/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** test_ac
*/

#include "../include/my_hunter.h"

int test_ac(int ac, char **av)
{
    if (ac > 2) {
        write(1, "Bad syntax, use ./my_hunter or ./my_hunter -h", 46);
        return (84);
    }
    if (ac == 2 && my_strcmp(av[1], "-h") != 0) {
        write(1, "Bad syntax, use ./my_hunter or ./my_hunter -h", 46);
        return (84);
    }
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        write(1, "My peaceful hunter!\n\n\n", 23);
        write(1, "Usage : use ./my_hunter or ./my_hunter -h\n", 43);
        write(1, "In this game, you must give love to ducks flying in ", 53);
        write(1, "the sky!\nBe careful though because, you only have ", 51);
        write(1, "3 lives per level!\nIf you cant hit the duck with", 49);
        write(1, " your love, you lose a life!\nHave fun!", 39);
        write(1, "\n\n\nCredits go to Toby Fox for the music, check ", 48);
        write(1, "his wonderful work if you can!\n", 33);
        return (84);
    }
}