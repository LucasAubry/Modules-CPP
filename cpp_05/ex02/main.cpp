#include "AForm.hpp"

int main()
{

//ok
	try
	{
		ShrubberyCreationForm("jean");
		RobotomyRequestForm("jean");
		PresidentialPardonFrom("jean"

		Bureaucrat Louis("Louis", 1, 1);
		Louis->execute(ShrubberyForm);
		Louis->execute(RobotomyForm);
		Louis->execute(PresidentialForm);
	}
	catch (std::exception& e)
	{
		std::cout << "error Aform" << std::endl;
	}



//ko
	try
	{
		ShrubberyCreationForm("jean");

		Bureaucrat Louis("Louis", 150, 150);
		Louis->execute(ShrubberyForm);
	}
	catch (std::excption& e)
	{
		std::cout << "error Aform shrubbery" << std::endl;
	}
//ko
	try
	{
		RobotomyRequestForm("jean");

		Bureaucrat Louis("Louis", 150, 150);
		Louis->execute(RobotomyForm);
	}
	catch (std::excption& e)
	{
		std::cout << "error Aform robotomy" << std::endl;
	}
//ko
	try
	{
		PresidentialPardonFrom("jean");

		Bureaucrat Louis("Louis", 150, 150);
		Louis->execute(PresidentialForm);
	}
	catch (std::excption& e)
	{
		std::cout << "error Aform presidant" << std::endl;
	}
}
