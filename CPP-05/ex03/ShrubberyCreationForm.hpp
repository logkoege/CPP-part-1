#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:

	std::string _target;

	public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	ShrubberyCreationForm(std::string const &target);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};
