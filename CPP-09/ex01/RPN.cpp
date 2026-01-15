#include "RPN.hpp"

RPN::RPN()
{}

RPN::~RPN()
{}

RPN::RPN(RPN &other)
{
	(void)other;
}
RPN& RPN::operator=(RPN &other)
{
	(void)other;
	return (*this);
}

int evaluate(std::string invert)
{
	int result = 0;
	int i = 0;
	int a;
	int b;
	std::stack<int> stack;
	
	while (invert[i])
	{
		if (invert[i] == '+' || invert[i] == '-' || invert[i] == '*' || invert[i] == '/')
		{
			if(stack.size() <= 1)
				throw std::logic_error("Error syntax");
			else
			{
				b = stack.top();
				stack.pop();
				a = stack.top();
				stack.pop();
				if(invert[i] == '+' )
					stack.push(a + b);
				else if (invert[i] == '-' )
					stack.push(a - b);
				else if (invert[i] == '*' )
					stack.push(a * b);
				else if (invert[i] == '/' )
					stack.push(a / b);
			}
		}
		if (std::isdigit(invert[i]))
		{
			if (atoi(invert.c_str() + i) > 9 || (atoi(invert.c_str() + i) < -9))
				throw std::logic_error("Error number to big");
			stack.push(atoi(invert.c_str() + i));
		}
		i++;
	}
	if (stack.size() != 1)
		throw std::logic_error("Error calc");
	result = stack.top();
	return (result);
}
