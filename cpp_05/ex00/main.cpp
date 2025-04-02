#include "Bureaucrat.hpp"

int main()
{
//ok
	try
	{
		Bureaucrat gerard("gerard", 30);
		std::cout << gerard << std::endl;
		gerard.IncreGrade();
		std::cout << gerard << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "error" << std::endl;
	}

//ko
	try
	{
		Bureaucrat philipe("philipe", -10);
		std::cout << philipe << std::endl;
		philipe.DecreGrade();
		std::cout << philipe << std::endl;
	}
	catch (std::exception& e)
	{	
		std::cout << "error" << std::endl;
	}

//ko
	try
	{
		Bureaucrat theo("theo", 160);
		std::cout << theo << std::endl;
		theo.IncreGrade();
		std::cout << theo << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "error" << std::endl;
	}

//ok/ko
	try
	{
		Bureaucrat louis("louis", 149);
		std::cout << louis << std::endl;
		louis.IncreGrade();
		std::cout << louis << std::endl;
		louis.IncreGrade();
		std::cout << louis << std::endl;
		louis.IncreGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "error" << std::endl;
	}
}
