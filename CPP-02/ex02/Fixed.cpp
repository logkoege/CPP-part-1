#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->value = n << fractionalBits;
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->value = other.value;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.value;
	return *this;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->value >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

// part2 (operator)

bool	Fixed::operator>(const Fixed &other) const
{
	return this->value > other.value;
}
bool	Fixed::operator<(const Fixed &other) const
{
	return this->value < other.value;
}
bool	Fixed::operator>=(const Fixed &other) const
{
	return this->value >= other.value;
}
bool	Fixed::operator<=(const Fixed &other) const
{
	return this->value <= other.value;
}
bool	Fixed::operator==(const Fixed &other) const
{
	return this->value == other.value;
}
bool	Fixed::operator!=(const Fixed &other) const
{
	return this->value != other.value;
}


Fixed	Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}
Fixed	Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}
Fixed	Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}
Fixed	Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}


Fixed	&Fixed::operator++()
{
	this->value++;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value++;
	return tmp;
}
Fixed	&Fixed::operator--()
{
	this->value--;
	return *this;
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value--;
	return tmp;
}


Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
