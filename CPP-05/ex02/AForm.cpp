#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();

}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
	: _name(other._name),
	_isSigned(other._isSigned),
	_gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute)
{}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return *this;
}

AForm::~AForm()
{}

std::string AForm::getName() const
{
	return _name;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "AForm grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "AForm grade too low!";
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out << "AForm '" << f.getName() << "', signed: ";
	if (f.getIsSigned())
		out << "yes";
	else
		out << "no";
	out << ", grade to sign: " << f.getGradeToSign() << ", grade to execute: " << f.getGradeToExecute();
	return out;
}
