#include "AForm.hpp"

AForm::AForm(std::string name, const int gradeSigne, const int gradeExec)
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

AForm::~AForm()
{
	std::cout << " AForm was deleted " << std::endl;
}

AForm::AForm(const AForm& other)
{
	*this = other;
}

AForm &AForm::operator=(const AForm& other)
{
	this->_name = other._name;
	this->_gradeSigne = other._gradeExec;
	this->_gradeExec = other._gradeSigne;
	return *this;
}

std::ostream& operator<<(std::ostream &os, AForm const& other)
{
	int true_false = other.getSigned();
	std::string result;
	if (true_false == 0)
		result = " not signed";
	else
		result = " signed ";
	os << "the AForm " << other.getName() << " is " << result <<
		" and for be signed you need be grade " << other.getGradeSigne() <<
	   	" and for be execute you need be grade " << other.getGradeExec();
	return os;
}

std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSigned() const
{
	return this->_signe;
}

int AForm::getGradeSigne() const
{
	return this->_gradeSigne;
}

int AForm::getGradeExec() const
{
	return this->_gradeExec;
}

const char* AForm::GradeTooHightException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* AForm::GradeIsSignedException::what() const throw() {
	return "is not signed!";
}

void AForm::beSigned(const Bureaucrat &other)
{
		if (this->_gradeSigne <= other.getGrade())
			throw GradeTooLowException();
		else
			this->_signe = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	std::cout << executor.getName() << " cannot execute the form beacause it is empty" << std::endl;
}
