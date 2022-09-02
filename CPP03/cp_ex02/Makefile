# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 13:11:13 by adaloui           #+#    #+#              #
#    Updated: 2022/09/02 05:04:50 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= FragTrap
SRCS= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INCLUDE= ClapTrap.hpp

OBJS		=		$(SRCS:.cpp=.o)

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98

%.o:				%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compilation du programme $(NAME)"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -Rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

.PHONY: all clean fclean re