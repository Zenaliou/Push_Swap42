NAME = push_swap

SRCS = srcs/push_swap.c srcs/operation.c srcs/sort.c srcs/utils.c srcs/rotate.c srcs/parsing.c srcs/check.c srcs/sort_small.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes -I libft -I ft_printf

LIBFT = libft/libft.a

FT_PRINTF = ft_printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(FT_PRINTF) -o $(NAME)

$(LIBFT):
	make -C libft

$(FT_PRINTF):
	make -C ft_printf

%.o: %.c
	$(CC) $(CFLAGS) $(DEP) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C libft clean
	make -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean
	make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re