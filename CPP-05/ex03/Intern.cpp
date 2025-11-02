#include "Intern.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string formNames[3] =
	{"shrubbery creation", "robotomy request", "presidential pardon" };

	AForm *(Intern::*formCreators[3])(std::string const &) =
	{&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*formCreators[i])(target);
		}
	}
	std::cout << "Intern couldn't find form called \"" << formName << "\"" << std::endl;
	return NULL;
}

AForm *Intern::makeShrubbery(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomy(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::makePresidential(std::string const &target)
{
	return new PresidentialPardonForm(target);
}