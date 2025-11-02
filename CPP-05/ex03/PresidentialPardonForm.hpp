#pragma once
#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:

	std::string _target;

	public:

	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};
