#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << type << " Constructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal()
{
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "Cat Copy called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << type << " Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
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

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}