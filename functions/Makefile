NAME = libft.a
COMPILER = cc
COMPILERFLAGS = -Wall -Wextra -Werror -pedantic
SRCS = ft_test.c \
		ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strlen.c\

OBJS = $(SRCS: .c=.o)

all: $(NAME)

$(NAME): $(OBJSS)
	$(COMPILER) $(COMPILERFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(COMPILER) $(COMPILERFLAGS) -c $< -o $@

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
