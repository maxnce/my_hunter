/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-maxence.pellouin
** File description:
** my_hunter
*/

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Event.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/RenderTexture.h>
#include <SFML/System/Time.h>
#include <SFML/System/Clock.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Config.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/Listener.h>
#include <SFML/Audio/SoundStream.h>
#include <SFML/System.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <SFML/System/InputStream.h>
#include <time.h>

typedef struct texture {
    sfTexture *duckt;
    sfSprite *ducks;
    sfIntRect dsize;
    sfTexture *bgt;
    sfSprite *bgs;
    sfIntRect bgsize;
    sfTexture *visort;
    sfSprite *visors;
    sfIntRect vsize;
    sfTexture *prest;
    sfSprite *press;
    sfTexture *quitt;
    sfSprite *quits;
    sfTexture *startt;
    sfSprite *starts;
    sfSprite *hps;
    sfTexture *hpt;
    sfIntRect hpd;
} texture_t;

typedef struct misca {
    sfColor cl;
    sfClock *anm;
    sfClock *mvm;
    sfTime anmt;
    sfTime mvmt;
    sfVector2f dp;
    sfVector2f vp;
    sfVector2f vscale;
    sfMusic *bgmusic;
    sfMusic *hit;
    sfMusic *shot;
    float anms;
    float mvms;
    int hp;
    int sc;
    int needsc;
    int pts;
    int start;
} misc_t;

//lib
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);

//src
void event_window(sfEvent event, sfRenderWindow *window, misc_t *misc);
texture_t create_sprites(void);
sfVector2f adjust_pos(sfVector2f pos);
misc_t create_misc(void);
void refresh_window(sfRenderWindow *window, texture_t *images, misc_t *misc);
void game_values(misc_t *misc);
void animations(misc_t *misc, texture_t *images);
void update_mouse(sfEvent *evt, misc_t *misc);
void move_and_shoot(sfEvent *evt, misc_t *misc);
void score_and_hp(sfRenderWindow *window, misc_t *misc);
void start_screen(sfRenderWindow *window, misc_t *misc, texture_t *img);
void destroy_all(sfRenderWindow *window, texture_t *images, misc_t *misc);
void play_oof(misc_t *misc);
void play_pew(misc_t *misc);
void move_rect(sfIntRect *rect, int offset, int max_value);
void create_startscreen(texture_t *images);
void update_hp(texture_t *img, misc_t *misc);
int test_ac(int ac, char **av);

#endif /* !MY_HUNTER_H_ */
