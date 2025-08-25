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

	Fixed	&operator=(Fixed const &other);

	int		toInt(void)const;
	float	toFloat(void)const;

	void	setRawBits(int const raw);
	int		getRawBits()const;

	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);


	
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif