# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 12:38:25 by adaloui           #+#    #+#              #
#    Updated: 2022/09/16 21:51:51 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Interface_et_recap
SRCS= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp AMateria.cpp AMateria.hpp
INCLUDE= Animal.hpp

OBJS		=		$(SRCS:.cpp=.o)

CC= c++
FLAGS= -Wall -Wextra -std=c++98 -g3 -fsanitize=address

%.o:				%.cpp
	@$(CC) $(FLAGS) -c $< -o $@ -I $(INCLUDE)

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