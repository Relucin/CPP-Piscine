SRCS	+= Bureaucrat Form main
OBJS	:= $(addsuffix .o, $(SRCS))
SRCS	:= $(addsuffix .cpp, $(SRCS))
HDRS	+= Bureaucrat Form
HDRS	:= $(addsuffix .hpp, $(HDRS))
CC		:= clang++
FLAGS	+= -Wall -Wextra -Werror -std=c++98
FLAGS	+= -g #-fsanitize=undefined
NAME	:= form

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

format: $(SRCS) $(HDRS)
	 clang-format -style=Google -i $^

%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
