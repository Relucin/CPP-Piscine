SRCS	+= Bureaucrat Form main RobotomyRequestForm PresidentalPardonForm
SRCS	+= ShrubberyCreationForm
OBJS	:= $(addsuffix .o, $(SRCS))
SRCS	:= $(addsuffix .cpp, $(SRCS))
HDRS	+= Bureaucrat Form ShrubberyCreationForm PresidentalPardonForm
HDRS	+= RobotomyRequestForm
HDRS	:= $(addsuffix .hpp, $(HDRS))
CC		:= clang++
FLAGS	+= -Wall -Wextra -Werror -std=c++98
FLAGS	+= -g #-fsanitize=undefined
NAME	:= forms

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
