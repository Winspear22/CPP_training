# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 15:34:57 by adaloui           #+#    #+#              #
#    Updated: 2022/10/04 15:35:01 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Bureaucrat
SRCS= main.cpp Bureaucrat.cpp
INCLUDE= Bureaucrat.hpp

OBJS		=		$(SRCS:.cpp=.o)
DEPS		=		$(SRCS:.cpp=.d)

CC= c++
CFLAGS= -Wall -Wextra -std=c++98

%.o:				%.cpp
	@$(CC) $(CFLAGS) -MMD -c $< -o $@ -I $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compilation du programme $(NAME)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -Rf $(OBJS) $(DEPS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

-include $(DEPS)
.PHONY: all clean fclean re