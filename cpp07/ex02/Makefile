# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 10:14:14 by mayyildi          #+#    #+#              #
#    Updated: 2024/04/29 10:14:24 by mayyildi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	array
SRC		=	main.cpp

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
