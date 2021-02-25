/*
** EPITECH PROJECT, 2020
** initiation
** File description:
** main
*/

#include "include/my_hunter.h"
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

sfRenderWindow *create_window(unsigned int x, unsigned int y,
unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};

    return (sfRenderWindow_create(video_mode, title, sfDefaultStyle, NULL));
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left < max_value - offset) {
        rect->left += 110;
    } else {
        rect->left = 0;
    }
}

void play_pew(misc_t *misc)
{
    sfMusic_setVolume(misc->shot, 50);
    sfMusic_play(misc->shot);
}

void play_oof(misc_t *misc)
{
    misc->shot = sfMusic_createFromFile("hit1.ogg");
    sfMusic_setVolume(misc->hit, 40);
    sfMusic_play(misc->hit);
}

int main(int ac, char **av)
{
    if (test_ac(ac, av) == 84)
        return (84);
    sfRenderWindow *window = create_window(1920, 1080, 32, "Peaceful hunt");
    texture_t images = create_sprites();
    misc_t misc = create_misc();
    srand(time(NULL));
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        if (misc.start == 0)
            start_screen(window, &misc, &images);
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event))
            event_window(event, window, &misc);
        animations(&misc, &images);
        move_and_shoot(&event, &misc);
        score_and_hp(window, &misc);
        refresh_window(window, &images, &misc);
    }
    destroy_all(window, &images, &misc);
    return (EXIT_SUCCESS);
}