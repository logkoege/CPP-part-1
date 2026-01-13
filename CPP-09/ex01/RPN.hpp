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
};

int evaluate(std::string invert);