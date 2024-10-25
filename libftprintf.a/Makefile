NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRCS = digits.c ft_printf.c main.c strc.c
OBJS = $(SRCS:.c=.o)
HEAD = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEAD)
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re