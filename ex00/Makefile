MAKEFLAGS += --silent

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiled $(NAME) successfully!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "Make correctely clean"

fclean: clean
	rm -f $(NAME)
	@echo "Suppresed $(NAME) successfully"

re: fclean all

.PHONY: all clean fclean re
