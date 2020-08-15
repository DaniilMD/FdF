NAME = fdf

SRC = map_reader.c line_drawer.c rotate.c fdf.c kill_me.c

OBJ = map_reader.o line_drawer.o rotate.o fdf.o kill_me.o

HEADER = fdf.h

MLX_FLAGS = -L ./minilibx -lmlx -lXext -lX11
#MLX_FLAGS_MacOS = -L ./mlx/ -lmlx -framework OpenGL -framework AppKit 

LINUX_EXTRA_FLAGS = -lm -pthread

$(NAME): $(OBJ)
	@make -C libft/
	@gcc -Wall -Wextra -Werror $(SRC) -o $(NAME) -L libft -lft $(MLX_FLAGS) $(LINUX_EXTRA_FLAGS)

%.o:%.c $(HEADER)
	@gcc -Wall -Wextra -Werror -I . -c $< -o $@

clean:
	@/bin/rm -f *~
	@/bin/rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME)
	@make -C libft/ fclean

all: $(NAME)

re: fclean all

.PHONY: clean fclean all re
