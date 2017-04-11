NAME   = <<NAME>>.a
AUTHOR = iwordes

CC     = gcc
CF    += <<CF>>

SRC    = # Add *.c files here
SRC   := $(addprefix src/,$(SRC))

OBJ    = $(subst src/,build/,$(SRC:.c=.o))

# ------------------------------------------------------------------------------
# Phony Targets

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -rf build

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

# ------------------------------------------------------------------------------
# Real Targets

$(NAME): $(OBJ)
	libtool -static -o $@ $^

build/%.o: src/%.c
	@mkdir -p $(@D)
	$(CC) $(CF) -c -o $@ $<


