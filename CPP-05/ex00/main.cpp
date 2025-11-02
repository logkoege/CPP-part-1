#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat b1("logan", 149);
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		std::cout << b1 << std::endl;
		b1.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b2("cesario", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error Initialisation : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b3("cesario", 1);
		std::cout << b3 << std::endl;
		b3.incrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error : " << e.what() << std::endl;
	}
	return 0;
}
