#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>


class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const float f);
	Fixed(const int n);
	Fixed(const Fixed &other);
	~Fixed();
	int		toInt(void)const;
	float	toFloat(void)const;
	Fixed	&operator=(Fixed const &other);
	void	setRawBits(int const raw);
	int		getRawBits()const;
	
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif