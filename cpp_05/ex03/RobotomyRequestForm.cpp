#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy form", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm was delated" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->_target = other._target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw GradeIsSignedException();
	else if (executor.getGrade() > this->getGradeSigne())
		throw GradeTooLowException();
	else
	{
		srand(time(0));
		int i = rand() % 100 + 1;
	
		if (i >= 50)
		{
			std::cout << "BIZZZZZ" << std::endl;
			std::cout << this->_target << "was robotized" << std::endl;
		}
		else
			std::cout << "the operation failed sorry" << std::endl;
	}
}
