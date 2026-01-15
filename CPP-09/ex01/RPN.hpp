#pragma once


#include <string>
#include <iostream>
#include <stack>
#include <cstdlib>
#include <exception>

class RPN
{
	public:
		RPN();
		~RPN();
		RPN(RPN &other);
		RPN& operator=(RPN &other);
};

int evaluate(std::string invert);