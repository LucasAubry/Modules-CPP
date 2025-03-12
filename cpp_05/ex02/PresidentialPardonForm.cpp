#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential form", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm was delated" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->_target = other._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == true)
		throw GradeIsSignedException();
	else if (executor.getGrade() > this->getGradeSigne())
		throw GradeTooLowException();
	else	
		std::cout << this->_target << "was forgiven" << std::endl;
}
