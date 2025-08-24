#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
	float value;
	int fractionalBits;

public:
	Fixed();
	Fixed(int n);
	Fixed(Fixed &other);
	~Fixed();
	Fixed	&operator=(Fixed &other);
	int		getRawBits();
	Fixed&	Fixed::toInt(Fixed &other);
};

#endif