NAME     := fillit
VERSION  := 1.1.0

INCDIR   := ./include
LIBDIR   := ./lib
OBJDIR   := ./build
OUTDIR   := .
SRCDIR   := ./src

COMPILER := gcc
CFLAGS   := -Wall -Wextra -Werror -I $(INCDIR) -L $(LIBDIR) -l ft

CMP      := $(COMPILER) $(CFLAGS)

INPUTS   := align_tetra create_tetra done fail fillit init_tetras validate_buffer main overfill place
OUTPUTS  := fillit

SRC      := $(addsuffix .c,$(addprefix $(SRCDIR)/,$(INPUTS)))
OUT      := $(addprefix $(OUTDIR)/,$(OUTPUTS))

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	@-if [ ! "$(OBJDIR)" == "." ]; then rm -rf $(OBJDIR); fi
	make -C $(LIBDIR)/libft clean

.PHONY: fclean
fclean: clean
	rm -f $(OUT)
	rm -f $(LIBDIR)/libft.a
	make -C $(LIBDIR)/libft fclean

.PHONY: re
re: fclean all


$(NAME): $(SRC) $(LIBDIR)/libft.a
	$(CMP) $(SRC) -o $(NAME)

$(LIBDIR)/libft.a:
	make -C $(LIBDIR)/libft
	mv $(LIBDIR)/libft/libft.a $(LIBDIR)/
