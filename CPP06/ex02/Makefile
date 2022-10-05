# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 12:42:13 by adaloui           #+#    #+#              #
#    Updated: 2022/10/05 12:42:14 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= IdentifyType
SRCS= main.cpp Base.cpp A.cpp B.cpp C.cpp
INCLUDE= Base.hpp

OBJS		=		$(SRCS:.cpp=.o)
DEPS		=		$(SRCS:.cpp=.d)

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98 -g3

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