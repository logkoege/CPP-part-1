#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "error: wrong arg number" << std::endl;
		return (1);
	}
	try
	{
		int result;
		result = evaluate(av[1]);
		std::cout << result << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "error" << std::endl;
	}
	return (0);
}