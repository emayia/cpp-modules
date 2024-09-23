# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayyildi <mayyildi@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 04:08:20 by mayyildi          #+#    #+#              #
#    Updated: 2024/03/31 13:52:48 by mayyildi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	a.out
SRC		=	main.cpp					\
			AForm.cpp					\
			Bureaucrat.cpp				\
			ShrubberyCreationForm.cpp	\
			RobotomyRequestForm.cpp		\
			PresidentialPardonForm.cpp	\
			Intern.cpp					\

OBJ		=	$(SRC:%.cpp=%.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) *"_shrubbery"

fclean: clean
	rm  -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
