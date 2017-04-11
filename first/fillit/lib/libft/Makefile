NAME     := libft
VERSION  := 1.1.1
AUTHOR   := iwordes

INCDIR   := .
OBJDIR   := ./build
OUTDIR   := .
SRCDIR   := .

COMPILER := gcc
CFLAGS   := -Wall -Wextra -Werror -I $(INCDIR)

CMP      := $(COMPILER) $(CFLAGS)

OUTPUTS  := $(OUTDIR)/$(NAME).a

FN_MEMORY :=\
ft_bzero\
ft_drealloc\
ft_memalloc\
ft_memccpy\
ft_memchr\
ft_memcmp\
ft_memcpy\
ft_memdel\
ft_memmove\
ft_memset\
ft_realloc

FN_STRING =\
ft_atoi\
ft_charcnt\
ft_charrcnt\
ft_itoa\
ft_itoa_base\
\
ft_strcap\
ft_strcat\
ft_strchr\
ft_strclr\
ft_strcmp\
ft_strcpy\
ft_strctrim\
\
ft_isupper\
ft_islower\
ft_isalpha\
ft_isdigit\
ft_isalnum\
ft_ispunct\
ft_isprint\
ft_iscntrl\
ft_isascii\
ft_isstdspace\
\
ft_strdup\
ft_strlcat\
ft_strlen\
ft_strncmp\
ft_strncpy\
ft_strnstr\
ft_strrchr\
ft_strstr\
ft_strsub\
\
ft_strdel\
ft_strequ\
ft_striter\
ft_striteri\
ft_strjoin\
ft_strmap\
ft_strmapi\
ft_strncat\
ft_strnequ\
ft_strnew\
ft_strrchr\
ft_strsplit\
ft_strtrim\
\
ft_strrev\
ft_strrevdup\
ft_strsim\
ft_struntil\
ft_struntils\
ft_strluntil\
ft_leftpad\
ft_rightpad\
\
ft_strlowcase\
ft_strupcase\
ft_strrep\
ft_strssplit\
\
ft_tolower\
ft_toupper\

FN_NUMBER :=\
ft_absolute\
ft_greater\
ft_intlen\
ft_intlen_base\
ft_lesser\
ft_power\
ft_square\
ft_swap

FN_IO     :=\
ft_putchar\
ft_putchar_fd\
ft_putendl\
ft_putendl_fd\
ft_puterr\
ft_putint\
ft_putint_fd\
ft_putint_base\
ft_putint_base_fd\
ft_putstr\
ft_putstr_fd\
ft_putuint\
ft_putuint_fd\
ft_putuint_base\
ft_putuint_base_fd\
\
ft_putnbr\
ft_putnbr_fd

FN_LIST   :=\
ft_lstadd\
ft_lstdel\
ft_lstdelone\
ft_lstend\
ft_lstinsert\
ft_lstiter\
ft_lstlen\
ft_lstmap\
ft_lstn\
ft_lstndel\
ft_lstndelone\
ft_lstnew\
ft_lstpop\
ft_lstpush\
ft_lstshift\
ft_lstunshift

FN_TREE   :=\
ft_treebal\
ft_treeclr\
ft_treedel\
ft_treefind\
ft_treeins\
ft_treenew

INPUTS    := $(FN_MEMORY) $(FN_STRING) $(FN_NUMBER) $(FN_IO) $(FN_LIST) $(FN_TREE)

SRC       := $(addsuffix .c,$(addprefix $(SRCDIR)/,$(INPUTS)))
OBJ       := $(addsuffix .o,$(addprefix $(OBJDIR)/,$(INPUTS)))
BIN       := $(OUTDIR)/$(NAME).a

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	@echo rm -f $(OBJDIR)/"<objects>"
	@rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(BIN)

.PHONY: re
re: fclean all

.PHONY: test
test: $(OUTPUTS)

.PHONY: $(NAME)
$(NAME): $(OUTPUTS)


$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/libft.h
	@mkdir -p $(OBJDIR)
	$(CMP) -c $< -o $@

$(OUTDIR)/$(NAME).a: $(OBJ)
	@mkdir -p $(OUTDIR)
	@echo ar -rc $(OUTDIR)/$(NAME).a "<objects>"
	@ar -rc $(OUTDIR)/$(NAME).a $(OBJ)
	ranlib $(OUTDIR)/$(NAME).a
