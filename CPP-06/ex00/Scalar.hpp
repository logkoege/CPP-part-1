#pragma once
#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>
#include <stdlib.h>

class Scalar
{
	public:
		static void convert(std::string literal);

	private:
		Scalar();
		Scalar(Scalar &other);
		Scalar &operator=(Scalar &other);
		~Scalar();

		static bool isChar(std::string &literal);
		static bool isInt(std::string &literal);
		static bool isFloat(std::string &literal);
		static bool isDouble(std::string &literal);
		static bool isPseudoLiteral(std::string &literal);
};
