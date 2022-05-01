# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 20:02:03 by adaloui           #+#    #+#              #
#    Updated: 2022/05/01 16:46:28 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= sed_is_for_losers
SRCS= main.cpp sed.cpp
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