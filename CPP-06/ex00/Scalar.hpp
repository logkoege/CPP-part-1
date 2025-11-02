#pragma once
#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>

class Scalar
{
	public:
		static void convert(const std::string &literal);

	private:
		Scalar();
		Scalar(Scalar &other);
		Scalar &operator=(Scalar &other);
		~Scalar();

		static bool isChar(const std::string &literal);
		static bool isInt(const std::string &literal);
		static bool isFloat(const std::string &literal);
		static bool isDouble(const std::string &literal);
		static bool isPseudoLiteral(const std::string &literal);
};
