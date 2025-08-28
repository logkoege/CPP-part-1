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