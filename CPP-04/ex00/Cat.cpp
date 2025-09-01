#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout<< type << " Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

Cat::Cat(Cat const &other) : Animal()
{
	this->type = other.type;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Cat operator= called" << std::endl;
	return (*this);
}
