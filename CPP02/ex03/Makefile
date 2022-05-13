# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 16:13:37 by adaloui           #+#    #+#              #
#    Updated: 2022/05/13 16:14:24 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= BSP
SRCS= main.cpp Fixed.cpp Point.cpp bsp.cpp
SRCSDIR = .

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compilation du programme $(NAME)"
	$(CC) $(FLAGS) -o $@ $^
clean:
	rm -Rf $(NAME)

fclean: clean
re: fclean all

.PHONY: all clean fclean re