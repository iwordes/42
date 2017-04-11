NAME   = <<NAME>>
AUTHOR = iwordes

CC     = gcc
CF    += <<CF>>
CF    += <<CL>>

SRC    = # Add *.c files here
SRC   := $(addprefix src/,$(SRC))

# ------------------------------------------------------------------------------
# Phony Targets

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	rm -rf build<<LIBCLEAN>>

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

# ------------------------------------------------------------------------------
# Real Targets

$(NAME): $(SRC)<<LIBREQ>>
	$(CC) $(CF) -o $@ $^
<<LIBMAKE>>
