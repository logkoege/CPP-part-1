# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 18:01:28 by logkoege          #+#    #+#              #
#    Updated: 2025/05/20 18:46:38 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = g++
SRC = main.cpp\
		newZombie.cpp\
		Zombie.cpp\
		randomChump.cpp\

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