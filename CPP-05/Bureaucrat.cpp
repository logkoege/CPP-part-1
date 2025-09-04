#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name ("lev"), _grade (150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{}

Bureaucrat::~Bureaucrat()
{}


bool Bureaucrat::GradeTooLowException()
{
	if (_grade < 1)
		return (true);
	return (false);
}

bool Bureaucrat::GradeTooHighException()
{
	if (_grade > 150)
		return (true);
	return (false);
}

int Bureaucrat::getGrade()
{
	return (this->_grade);
}

std::string Bureaucrat::getName()
{
	return (this->_name);
}