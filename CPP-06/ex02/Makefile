NAME = Base
CC = c++
SRC = main.cpp\
	Base.cpp\
	utils.cpp

CPPFLAGS = -Werror -Wall -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re