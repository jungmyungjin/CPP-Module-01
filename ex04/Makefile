SRCS = ./main.cpp

CC = clang++
NAME = replace

CFLANG = -Wall -Wextra -Werror  -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re