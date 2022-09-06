# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 12:38:25 by adaloui           #+#    #+#              #
#    Updated: 2022/09/06 13:43:35 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Polymorphisme
SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
INCLUDE= Animal.hpp

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