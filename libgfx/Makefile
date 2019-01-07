# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cflores- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/08 03:22:33 by cflores-          #+#    #+#              #
#    Updated: 2018/12/08 03:27:31 by cflores-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libgfx.a
FLAGS =	-Wall -Wextra -Werror
CC = 	gcc
ODIR =	bin/
IDIR =
SRC =
OBJ =	$(SRC:.c=.o)
EXT =	$(IDIR)$(NAME:.a=.h)

EXT +=	Makefile

SRC	+=	draw_line.c \
		matrix.c \
		alter_matrix.c \
		init.c

O =		$(addprefix $(ODIR), $(OBJ))

MLXINC	= -I../minilibx
LFTINC	= -I../libft

all: $(NAME)

love: all

norm:
	norminette $(S)

$(NAME): $(O) $(EXT)
	@ar rc $(NAME) $(O)
	@ranlib $(NAME)

$(ODIR)%.o: %.c $(EXT)
	@echo "Loading.. $<..."
	@$(CC) $(FLAGS) $(MLXINC) $(LFTINC) -c $< -o $@

$(O): | ./bin

./bin:
	@mkdir $(ODIR)

clean:
	@echo "-> libgfx object files have been removed.."
	@rm -f bin/*.o

fclean: clean
	@echo "-> Removing .a file $(NAME)..."
	@rm -f $(NAME)

re: fclean all
