#include "Fixed.hpp"

Fixed::Fixed() : value(0), fractionalBits(8)
{
	std::cout << "Default construtor called" << std::endl;
}

Fixed::Fixed(Fixed &other)
{
	std::cout << "Copy constuctor called" << std::endl;
	value = other.value;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed& Fixed::operator=(Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.value;
	return (*this);
}