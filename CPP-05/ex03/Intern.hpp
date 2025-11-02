#pragma once
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public :

	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();
	AForm *makeForm(std::string formName, std::string target);

	private :

	AForm *makeShrubbery(std::string const &target);
	AForm *makeRobotomy(std::string const &target);
	AForm *makePresidential(std::string const &target);
};