#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << " Animal Constructor called" << std::endl;
}

std::string Animal::getType() const
{
	return(type);
}

void Animal::makeSound() const
{
	std::cout << "animal noise" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
