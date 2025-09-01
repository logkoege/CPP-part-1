#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal Constructor called" << std::endl;
}

std::string AAnimal::getType() const
{
	return(type);
}

void AAnimal::makeSound() const
{
	std::cout << "animal noise" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other)
{
	this->type = other.type;
	std::cout << "Animal Copy called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "operator called" << std::endl;
	return (*this);
}
