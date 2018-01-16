SRCS	+= main phonebook.class contact.class
SRCS	:= $(addsuffix .o, $(SRCS))
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror -fsanitize=undefined -std=c++98
NAME	:= phonebook

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
