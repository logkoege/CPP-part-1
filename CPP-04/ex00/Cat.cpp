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