NAME = libft.a
COMPILER = cc
COMPILERFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strlen.c\
		ft_split.c\
		ft_substr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $^ $@

%.o: %.c
	$(COMPILER) $(COMPILERFLAGS) -I. -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
