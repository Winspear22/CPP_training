# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 16:30:45 by adaloui           #+#    #+#              #
#    Updated: 2022/06/13 16:32:50 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= premier_pas_vers_une_classe_utile
SRCS= main.cpp Fixed.cpp
INCLUDE = Fixed.hpp

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