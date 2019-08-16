##
## EPITECH PROJECT, 2017
## make
## File description:
## make
##

SRC	=	src/display.c		\
		src/my_hunter.c		\
		src/rect-pos.c		\
		src/score.c


OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

FLAGS1	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

FLAGS2	=	-Werror -Wall -Wextra -Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(FLAGS1) $(FLAGS2)

clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f 	$(NAME)

re:	fclean all

.PHONY:		 all clean fclean re
