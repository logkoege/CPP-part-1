#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << type << " Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << type << " Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "wrong meow" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal()
{
	this->type = other.type;
	std::cout << "WrongCat Copy called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "operator called" << std::endl;
	return (*this);
}