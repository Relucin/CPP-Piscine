SRCS	+= main Game.class Player.class GameEntity.class Fighter.class
OBJS	:= $(addsuffix .o, $(SRCS))
SRCS	:= $(addsuffix .cpp, $(SRCS))
HDRS	+= Game.class Player.class GameEntity.class Fighter.class
HDRS	:= $(addsuffix .hpp, $(HDRS))
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror -g -std=c++98#-fsanitize=undefined
LIBS	:= -lncurses
NAME	:= ft_retro

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIBS) $^ -o $@

format: $(SRCS) $(HDRS)
	 clang-format -style=Google -i $^

%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
