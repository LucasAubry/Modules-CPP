#include "Form.hpp"

Form::Form(std::string name, const int gradeSigne, const int gradeExec)
{
	this->_name = name;
	this->_signe = false;

	if (gradeSigne > 150 || gradeExec > 150)
		throw GradeTooLowException();
	else if (gradeSigne < 1 || gradeExec < 1)
		throw GradeTooHightException();
	else
	{
		this->_gradeSigne = gradeSigne;
		this->_gradeExec = gradeExec;
	}
}

Form::~Form()
{
	std::cout << " Form was deleted " << std::endl;
}

Form::Form(const Form& other)
{
	*this = other;
}

Form &Form::operator=(const Form& other)
{
	this->_name = other._name;
	this->_gradeSigne = other._gradeExec;
	this->_gradeExec = other._gradeSigne;
	return *this;
}

std::ostream& operator<<(std::ostream &os, Form const& other)
{
	int true_false = other.getSigned();
	std::string result;
	if (true_false == 0)
		result = "not signed";
	else
		result = " signed ";
	os << "the Form " << other.getName() << " is " << result <<
		" and for be signed you need be grade " << other.getGradeSigne() <<
	   	" and for be execute you need be grade " << other.getGradeExec();
	return os;
}

std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signe;
}

int Form::getGradeSigne() const
{
	return this->_gradeSigne;
}

int Form::getGradeExec() const
{
	return this->_gradeExec;
}


void Form::beSigned(Bureaucrat &other)
{
	if (this->_signe == false)
	{
		if (this->_gradeSigne < other.getGrade())
			throw GradeTooLowException();
		this->_signe = true;
	}
	else
		std::cout << " error is signed " << std::endl;
}

const char* Form::GradeTooHightException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}
