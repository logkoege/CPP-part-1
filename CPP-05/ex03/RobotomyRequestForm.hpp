#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:

	std::string _target;

	public:

	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;

};
