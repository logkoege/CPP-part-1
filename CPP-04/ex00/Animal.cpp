#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Constructor called" << std::endl;
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

Animal::Animal(Animal const &other)
{
	this->type = other.type;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "operator= called" << std::endl;
	return (*this);
}
