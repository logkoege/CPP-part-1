#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << type << " Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noise" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	this->type = other.type;
	std::cout << "WrongAnimal Copy called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "operator called" << std::endl;
	return (*this);
}
