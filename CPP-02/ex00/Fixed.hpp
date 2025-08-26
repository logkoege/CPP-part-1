#pragma once

# include <string>
# include <iostream>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(Fixed &other);
	~Fixed();
	Fixed	&operator=(Fixed &other);
	void	setRawBits(int const raw);
	int		getRawBits();

};