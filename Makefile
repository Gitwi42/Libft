
.PHONY: all clean fclean re

NAME = LIBFT

SRCS = Libft/Fonctions/ft_atoi.c Libft/Fonctions/ft_bzero.c Libft/Fonctions/ft_calloc.c \
	Libft/Fonctions/ft_isalnum.c Libft/Fonctions/ft_isalpha.c Libft/Fonctions/ft_isascii.c \
	Libft/Fonctions/ft_isdigit.c Libft/Fonctions/ft_isprint.c Libft/Fonctions/ft_memchr.c \
	Libft/Fonctions/ft_memcmp.c Libft/Fonctions/ft_memcpy.c Libft/Fonctions/ft_memmove.c \
	Libft/Fonctions/ft_memset.c Libft/Fonctions/ft_strchr.c Libft/Fonctions/ft_strdup.c \
	Libft/Fonctions/ft_strjoin.c Libft/Fonctions/ft_strlcat.c Libft/Fonctions/ft_strlcpy.c \
	Libft/Fonctions/ft_strlen.c Libft/Fonctions/ft_strncmp.c Libft/Fonctions/ft_strnstr.c \
	Libft/Fonctions/ft_strrchr.c Libft/Fonctions/ft_substr.c Libft/Fonctions/ft_tolower.c \
	Libft/Fonctions/ft_toupper.c Libft/Fonctions/ft_substr.c Libft/Fonctions/ft_strjoin.c \
	Libft/Fonctions/ft_strtrim.c 


OBJS = $(SRCS:.c=.o)

%.o: %.c
	cc -c $< -o $@

$(NAME): $(OBJS)
	cc $(OBJS) -Wall -Wextra -Werror -o $(NAME)
	./$(NAME)
	$(MAKE) fclean
	clear

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
