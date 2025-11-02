#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm Shrubbery;
	Bureaucrat b("TREE", 1);
	try
	{
		b.signForm(Shrubbery);
		b.executeForm(Shrubbery);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat c("logan", 1);
	RobotomyRequestForm Robotomy;
	try
	{
		c.signForm(Robotomy);
		c.executeForm(Robotomy);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat d("test", 1);
	PresidentialPardonForm Pardon;
	try
	{
		d.signForm(Pardon);
		d.executeForm(Pardon);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}