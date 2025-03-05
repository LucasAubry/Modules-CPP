#include "Form.hpp"

int main()
{

//ok
	try
	{
		Form formulaire_1("form_1", 30, 40);
		std::cout << formulaire_1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "error form" << std::endl;
	}

//ko
	std::cout << "\n" << std::endl;
	try
	{
		Form formulaire_2("form_2", 140, 0);
		std::cout << formulaire_2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "error form" << std::endl;
	}

//ko	
	std::cout << "\n" << std::endl;
	
	try
	{
		Form formulaire_3("form_3", 200, 10);
		std::cout << formulaire_3 << std::endl;	
	}
	catch (std::exception& e)
	{
		std::cout << "error form" << std::endl;
	}

//ok
	std::cout << "\n" << std::endl;

	try
	{
		Bureaucrat bur_1("louis", 1);
		std::cout << bur_1 << std::endl;
		Form formulaire_4("form_4", 5, 5);
		std::cout << formulaire_4 << std::endl;
	
		formulaire_4.beSigned(bur_1);

		std::cout << formulaire_4 << std::endl;
		bur_1.signeForm(formulaire_4);
	}
	catch (std::exception& e)
	{
		std::cout << "error form with bureaucrat" << std::endl;
	}

//ko
	std::cout << "\n" << std::endl;
	
	try
	{
		Bureaucrat bur_2("not louis", 149);
		std::cout << bur_2 << std::endl;
		Form formulaire_5("form_5", 1, 1);
		std::cout << formulaire_5 << std::endl;
		bur_2.signeForm(formulaire_5);
		formulaire_5.beSigned(bur_2);
	}
	catch (std::exception& e)
	{
		std::cout << "error form with bureaucrat" << std::endl;
	}
}
