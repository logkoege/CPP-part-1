#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
	int value;
	int fractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed &other);
	Fixed	&operator=(Fixed &other);
	int		getRawBits();
	void	setRawBits(int raw);

};

#endif