# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 12:40:04 by adaloui           #+#    #+#              #
#    Updated: 2022/10/05 23:11:21 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ScalaireConversion
SRCS= main.cpp ConversionToInt.cpp ConversionToFloat.cpp ConversionToDouble.cpp ConversionToChar.cpp \
		ConversionToInf.cpp ConversionToNaN.cpp ScalaireConversion.cpp
INCLUDE= ScalaireConversion.hpp

OBJS		=		$(SRCS:.cpp=.o)
DEPS		=		$(SRCS:.cpp=.d)

CC= c++
CFLAGS= -Wall -Wextra -std=c++98 -g3

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