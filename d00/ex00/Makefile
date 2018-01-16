SRCS	+= megaphone
SRCS	:= $(addsuffix .o, $(SRCS))
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror -std=c++98#-fsanitize=undefined
NAME	:= megaphone

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
