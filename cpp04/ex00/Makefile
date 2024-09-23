# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 16:37:20 by mayyildi          #+#    #+#              #
#    Updated: 2024/03/13 10:11:00 by mayyildi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	a.out
SRC		=	main.cpp	\
			Animal.cpp	\
			Cat.cpp		\
			Dog.cpp		\

OBJ		=	$(SRC:%.cpp=%.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm  -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
