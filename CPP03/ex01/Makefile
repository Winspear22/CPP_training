# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 17:29:45 by adaloui           #+#    #+#              #
#    Updated: 2022/06/17 19:12:33 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ScavTrap
SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp
INCLUDE = ClapTrap.hpp

OBJS		=		$(SRCS:.cpp=.o)
DEPS		=		$(SRCS:.cpp=.d)

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98

%.o:				%.cpp
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@ -I $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compilation du programme $(NAME)"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	rm -Rf $(OBJS) $(DEPS)

fclean: clean
	rm -Rf $(NAME)
re: fclean all

-include $(DEPS)
.PHONY: all clean fclean re