NAME  = libgfx

CC    = gcc
CF   += -Wall -Wextra -Werror
CF   += -I include -I lib/gfx/include
CF   += -L lib/gfx -lgfx -L lib/mlx -lmlx -lm -framework OpenGL -framework AppKit

SRC   = init.c main.c

SRC  := $(addprefix src/,$(SRC))

# --------------------------------------------------------------------------

.PHONY: all
all: $(NAME).a

.PHONY: clean
clean:
	rm -rf build
	make -C fclean lib/gfx

.PHONY: fclean
fclean: clean
	rm -f libgfx.a

.PHONY: re
re: fclean all

# --------------------------------------------------------------------------

# lib/mlx/libmlx.a
$(NAME): $(SRC) lib/gfx/libgfx.a
