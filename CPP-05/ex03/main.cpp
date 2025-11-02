#include "Intern.hpp"

int main()
{
	Intern someIntern;
	AForm* form;
	Bureaucrat b("TREE", 1);
	Bureaucrat c("ROBOT", 1);
	Bureaucrat d("PARDON", 1);

	form = someIntern.makeForm("shrubbery creation", "logan");
	if (form)
	{
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	form = someIntern.makeForm("robotomy request", "lev");
	if (form)
	{
		c.signForm(*form);
		c.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	form = someIntern.makeForm("presidential pardon", "tourpal");
	if (form)
	{
		d.signForm(*form);
		d.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	form = someIntern.makeForm("fail test", "test");
	if (form)
		delete form;

	return 0;
}
