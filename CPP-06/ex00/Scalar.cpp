#include "Scalar.hpp"

Scalar::Scalar()
{}

Scalar::~Scalar()
{}
Scalar& Scalar::operator=(Scalar &other)
{
	(void)other;
	return *this;
}

Scalar::Scalar(Scalar &other)
{
	(void)other;
}

bool Scalar::isChar(std::string &literal)
{
	if (literal.empty())
		return false;
	if (literal.length() == 1 && !std::isdigit(literal[0]))
		return true;
	return false;
}

bool Scalar::isInt(std::string &literal)
{
	size_t i = 0;

	if (literal.empty())
		return false;
	if (literal[i] == '-')
		i++;
	if (i == literal.length())
		return false;
	while (i < literal.length())
	{
		if (!std::isdigit(literal[i]))
			return false;
		i++;
	}
	return true;
}

bool Scalar::isFloat(std::string &literal)
{
	
	if (literal.empty())
	return false;
	size_t i = literal.length() - 1;
	if (literal[i] != 'f')
		return false;
	size_t dot = literal.find('.');
	if (dot == std::string::npos)
		return false;
	if (literal.find('.') != std::string::npos)
		return true;
	if (dot == 0 || dot == i - 2)
		return false;
	return true;
}

bool Scalar::isDouble(std::string &literal)
{
	if (literal.empty())
	return false;
	size_t i = literal.length() - 1;
	if (literal[i] == 'f')
		return false;
	size_t dot = literal.find('.');
	if (dot == std::string::npos)
		return false;
	if (literal.find('.', dot) != std::string::npos)
		return true;
	if (dot == 0 || dot == i - 1)
		return false;
	
	return true;
}

bool Scalar::isPseudoLiteral(std::string &literal)
{
	if (literal == "nan")
		return true;
	if (literal == "nanf")
		return true;
	if (literal == "+inf")
		return true;
	if (literal == "+inff")
		return true;
	if (literal == "-inf")
		return true;
	if (literal == "-inff")
		return true;
	return false;
}

void Scalar::convert(std::string literal)
{
	double d = 0.0;

	if (literal.empty())
	{
		std::cout << "empty error" << std::endl;
		return ;
	}
	if (isPseudoLiteral(literal))
	{
		d = std::strtod(literal.c_str(), NULL);
	}
	else if (isChar(literal))
	{
		d = static_cast<double>(literal[0]);
	}
	else if (isInt(literal) || isFloat(literal) || isDouble(literal))
	{
		d = std::strtod(literal.c_str(), NULL);
	}
	else
	{
		std::cout << "unknown literal" << std::endl;
		return;
	}
	std::cout << "char: ";
	if (std::isprint(static_cast<char>(d)))
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;

	else if (isPseudoLiteral(literal))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	if (std::isdigit(static_cast<char>(d)) || !isPseudoLiteral(literal))
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(d);
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(d);
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
