##
## EPITECH PROJECT, 2020
## makefile
## File description:
## gcc etc...
##

CFLAGS = -Wall -Wextra -g3 -I./include

CSFML = -l csfml-graphics -l csfml-window -l csfml-system -l csfml-network -l csfml-audio

SRC	=	main.c \
		src/adjust_pos.c \
		src/animations.c \
		src/close_window.c \
		src/create_misc.c \
		src/create_sprites.c \
		src/create_startscreen.c \
		src/destroy_all.c \
		src/game_values.c \
		src/move_and_shoot.c \
		src/refresh_window.c \
		src/score_and_hp.c \
		src/start_screen.c \
		src/update_mouse.c \
		src/update_hp.c \
		src/test_ac.c \
		lib/my_put_nbr.c \
		lib/my_strcmp.c

OBJ 	=	$(SRC:.c=.o) $(MAIN:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC) $(CFLAGS) $(CSFML)
		rm -f *.o src/*.o lib/*.o

clean:
	rm -f $(NAME)
	rm -f *.o src/*.o

fclean: clean

re: fclean all