##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compil our project
##

SRCS	=	./src/my_runner.c		\
		./src/game.c			\
		./src/create_sprite_array.c	\
		./src/score_up.c		\
		./src/global.c			\
		./src/arg_h.c			\
		./src/credits.c			\
		./src/duck.c			\
		./src/event_gest.c		\
		./src/event_gest_in_game.c	\
		./src/display_anima_title.c	\
		./src/event_gest_in_credits.c	\
		./src/init_sprite.c		\
		./src/parallax.c		\
		./src/display_score.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	my_runner

CC	=	gcc

INCLUDE	=	-I ./include/

CFLAGS	+=	-g -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -Wall -Wextra $(INCLUDE)

LIB	=	-L lib/my/ -lmy

all:	mylib $(NAME)

mylib:
	make -C ./lib/my -lmy

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIB) $(CFLAGS)

clean:
	make clean -C ./lib/my
	rm -f $(OBJS)

fclean:
	make fclean -C ./lib/my
	make clean
	rm -f $(NAME)

re:
	make fclean
	make
