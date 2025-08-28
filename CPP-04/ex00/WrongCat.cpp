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
	std::cout << "waf" << std::endl;
}
