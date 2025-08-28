
#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default construtor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constuctor called" << std::endl;
	value = other.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

Fixed& Fixed::operator=(Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}