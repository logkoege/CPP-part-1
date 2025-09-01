NAME = animal
CC = c++
SRC = main.cpp\
	Dog.cpp\
	Cat.cpp\
	Animal.cpp\
	WrongCat.cpp\
	WrongAnimal.cpp

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