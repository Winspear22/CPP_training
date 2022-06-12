NAME= ClapTrap
SRCS= main.cpp ClapTrap.cpp
SRCSDIR = .
INCLUDE = include

OBJS		=		$(SRCS:.cpp=.o)
DEPS		=		$(SRCS:.cpp=.d)

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compilation du programme $(NAME)"
	$(CC) -MMD -MP $(FLAGS) -o $@ $^ -I $(INCLUDE)
clean:
	rm -Rf $(OBJS) $(DEPS)

fclean: clean
	rm -Rf $(NAME)
re: fclean all


-include $(DEPS)
.PHONY: all clean fclean re