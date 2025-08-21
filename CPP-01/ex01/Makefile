# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 13:48:04 by logkoege          #+#    #+#              #
#    Updated: 2025/05/21 17:46:53 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = g++
SRC = main.cpp\
		zombieHorde.cpp\
		Zombie.cpp\

CPPFLAGS = -Werror -Wall -Wextra -std=c++98 -g

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) $(MLX) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re