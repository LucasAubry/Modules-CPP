#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade)
{
	std::cout << "Bureaucrat was created" << std::enld;
	this->_name = "default name";
	if (grade > 150)
		GradeTooHightExecption();
	else if (grade < 1)
		GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat was deleted" << std::enld;
}

Bureaucrat &Bureaucrat::(const Bureaucrat& other)
{
	*this = &other;
}

Bureaucrat &Bureaucrat::operator<<(const Bureaucrat &other)
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != other)
	{
		this->_name = other.getName();
		this->_grade = other.getGrade();
	}
	return *this;
}


Bureaucrat::GradeTooHightException()
{
	std::cout << "the grade is to hight sorry" << std::endl;
}

Bureacrart::GradeTooLowExecption()
{
	std::cout << "the grade is to low sorry" << std::endl;
}

std::string Bureaucrat::GetName()
{
	return this->name;
}
	
int Bureaucrat::getGrade()
{
	return this->_grade;	
}

void Bureaucrat::IncreGrade()
{
	if (this->_grade < 150)
		this->_grade = this->_grade + 1;
	else
		GradeTooHightException();
}

void Bureaucrat::DecreGrade()
{
	if (this->_grade > 1)
		this->_grade = this->_grade - 1;
	else
		GradeTooLowException();
}
