# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 18:42:59 by adaloui           #+#    #+#              #
#    Updated: 2022/05/06 20:34:35 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ZombieHorde
SRCS= main.cpp Zombie.cpp zombieHorde.cpp
SRCSDIR = .

CC= clang++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compilation du programme $(NAME)"
	@$(CC) $(FLAGS) -o $@ $^
clean:
	rm -Rf $(NAME)

fclean: clean
re: fclean all

.PHONY: all clean fclean re