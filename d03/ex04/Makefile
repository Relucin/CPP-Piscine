SRCS	+= FragTrap ScavTrap ClapTrap NinjaTrap SuperTrap main
OBJS	:= $(addsuffix .o, $(SRCS))
SRCS	:= $(addsuffix .cpp, $(SRCS))
HDRS	+= FragTrap ScavTrap ClapTrap NinjaTrap SuperTrap
HDRS	:= $(addsuffix .hpp, $(HDRS))
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror -std=c++98#-fsanitize=undefined
NAME	:= claptrap

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
