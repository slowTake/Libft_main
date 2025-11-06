# ==================================
# 1. Compiler and Flags
# ==================================
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -I.
AR      := ar
ARFLAGS := rcs

# Colors
GREEN   := \033[0;32m
CYAN    := \033[0;36m
YELLOW  := \033[1;33m
RESET   := \033[0m

# ==================================
# 2. Files and Output
# ==================================
NAME    := libft.a

SRCS    := src/character/ft_isalpha.c \
           src/character/ft_isdigit.c \
           src/character/ft_isalnum.c \
           src/character/ft_isascii.c \
           src/character/ft_isprint.c \
           src/character/ft_toupper.c \
           src/character/ft_tolower.c \
           src/string/ft_strlen.c \
           src/string/ft_strlcpy.c \
           src/string/ft_strlcat.c \
           src/string/ft_strchr.c \
           src/string/ft_strrchr.c \
           src/string/ft_strncmp.c \
           src/string/ft_strnstr.c \
           src/string/ft_strdup.c \
           src/string/ft_substr.c \
           src/string/ft_strjoin.c \
           src/string/ft_strtrim.c \
           src/string/ft_strtol.c \
           src/string/ft_split.c \
           src/string/ft_strmapi.c \
           src/string/ft_striteri.c \
           src/memory/ft_memset.c \
           src/memory/ft_bzero.c \
           src/memory/ft_memcpy.c \
           src/memory/ft_memmove.c \
           src/memory/ft_memchr.c \
           src/memory/ft_memcmp.c \
           src/memory/ft_calloc.c \
           src/numeric/ft_atoi.c \
           src/numeric/ft_itoa.c \
           src/io/ft_putchar_fd.c \
           src/io/ft_putstr_fd.c \
           src/io/ft_putendl_fd.c \
           src/io/ft_putnbr_fd.c \
           src/printf/ft_printf.c \
           src/printf/ft_printf_utility.c \
           src/gnl/ft_gnl.c \
           src/gnl/ft_gnl_util.c

OBJS    := $(SRCS:.c=.o)

# ==================================
# 3. Rules
# ==================================

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "$(CYAN)📚 Built: $@$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)🛠️  Compiled:$(RESET) $<"

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)🧹 Cleaned object files$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)🧨 Removed $(NAME)$(RESET)"

re: fclean all
