#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("lo", 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int i = 0;
	if (!getIsSigned())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "ROAH ROAH !" << std::endl;
	srand((unsigned)time(0));
	i = (rand() % 2 ) + 1;
	if (i == 1)
		std::cout << executor.getName() << " has been robotomized succedssfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}
