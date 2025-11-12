#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("shrubbery creation", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{

	if (this != &other)

	{
		AForm::operator=(other);
		_target = other._target;

	}

	return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream outFile(_target + "_shrubbery");
	if (!outFile)
	{
		std::cout << "Error creating file: " << _target << "_shrubbery" << std::endl;
		return;

	}
	outFile << "       _-_" << std::endl;
	outFile << "    /~~   ~~\\" << std::endl;
	outFile << " /~~         ~~\\" << std::endl;
	outFile << "{               }" << std::endl;
	outFile << " \\  _-     -_  /" << std::endl;
	outFile << "   ~  \\\\ //  ~" << std::endl;
	outFile << "_- -   | | _- _" << std::endl;
	outFile << "  _ -  | |   -_" << std::endl;
	outFile << "      // \\\\" << std::endl;
	outFile.close();
}
