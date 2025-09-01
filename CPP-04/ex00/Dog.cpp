#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << type << " Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}

Dog::Dog(Dog const &other) : Animal()
{
	this->type = other.type;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog operator= called" << std::endl;
	return (*this);
}
