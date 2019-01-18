##
## ETNA PROJECT, 06/10/2018 by delapo_a
## my_printf Makefile
## File description:
##      Makefile to my_printf
##

CC		= gcc
AR 		= ar
CFLAGS	= -Wall -Wextra -Werror 
NAME	= myprintf.a
RM		= rm -f

SRC     = \
		../main.c \
		../libmy_printf.a

OBJ		= $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:
	fclean all
.PHONY:
	all $(NAME) clean fclean re