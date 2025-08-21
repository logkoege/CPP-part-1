# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 17:14:26 by logkoege          #+#    #+#              #
#    Updated: 2025/05/12 18:54:20 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CC = g++
SRC = main.cpp\
		Phonebook.cpp\
		Contact.cpp\

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