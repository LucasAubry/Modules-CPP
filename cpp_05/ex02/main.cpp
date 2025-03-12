#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{

//ok
	try
	{
		ShrubberyCreationForm ShrubberyForm("jean ");
		RobotomyRequestForm RobotomyForm("jean ");
		PresidentialPardonForm PresidentialForm("jean ");

		Bureaucrat Louis("Louis ", 1);
		Louis.executeForm(ShrubberyForm);
		std::cout << "\n" << std::endl;
		Louis.executeForm(RobotomyForm);
		std::cout << "\n" << std::endl;
		Louis.executeForm(PresidentialForm);
		std::cout << "\n" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << " error Aform " << std::endl;
	}


	std::cout << "\n" << std::endl;
//ko
	try
	{
		ShrubberyCreationForm ShrubberyForm("jean ");

		Bureaucrat Louis("Louis ", 150);
		Louis.executeForm(ShrubberyForm);
	}
	catch (std::exception& e)
	{
		std::cout << " error Aform shrubbery " << std::endl;
	}
//ko

	std::cout << "\n" << std::endl;
	try
	{
		RobotomyRequestForm RobotomyForm("jean ");

		Bureaucrat Louis("Louis ", 150);
		Louis.executeForm(RobotomyForm);
	}
	catch (std::exception& e)
	{
		std::cout << "error Aform robotomy " << std::endl;
	}
//ko
	std::cout << "\n" << std::endl;
	try
	{
		PresidentialPardonForm PresidentialForm("jean ");

		Bureaucrat Louis("Louis ", 150);
		Louis.executeForm(PresidentialForm);
	}
	catch (std::exception& e)
	{
		std::cout << " error Aform presidant " << std::endl;
	}
}
