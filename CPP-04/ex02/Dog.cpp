#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << type << " Constructor called" << std::endl;
}

Dog::Dog(Dog const &other): AAnimal()
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog Copy called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << type << " Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}
