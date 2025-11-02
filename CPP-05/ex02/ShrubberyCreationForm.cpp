#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::string fileName = executor.getName() + "_shrubbery";
	std::ofstream outFile(fileName.c_str());
	if (!outFile)
	{
		std::cerr << "Error creating file: " << fileName << std::endl;
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