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
