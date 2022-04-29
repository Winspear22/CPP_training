# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 20:08:50 by adaloui           #+#    #+#              #
#    Updated: 2022/04/29 20:26:05 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zombie_fight
SRCS= HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
SRCSDIR = .

CC= clang++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compilation du programme $(NAME)"
	@$(CC) $(FLAGS) -o $@ $^
clean: 

fclean: clean
	@rm -Rf $(NAME)
re: fclean all

.PHONY: all clean fclean re