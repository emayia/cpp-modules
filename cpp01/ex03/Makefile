# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 11:17:22 by mayyildi          #+#    #+#              #
#    Updated: 2024/01/05 06:06:32 by mayyildi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	shooter
SRC		=	Weapon.cpp		\
			HumanA.cpp		\
			HumanB.cpp		\
			main.cpp		\

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
