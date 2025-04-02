#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{

//ok
	Intern someRandomIntern;
	try
	{
		Bureaucrat louis("louis", 1);	
		Bureaucrat louisette("louisette", 150);	

		AForm *rrf = someRandomIntern.makeForm("Robotomy Request", "Bender ");
		AForm *ppf = someRandomIntern.makeForm("Presidential Pardon", "Bender ");
		AForm *scf = someRandomIntern.makeForm("Shrubbery Creation", "Bender ");
	//	AForm *notform = someRandomIntern.makeForm("notform", "Bender");

		std::cout << "ok \n" << std::endl;

		louis.signeAForm(*rrf);
		louis.signeAForm(*ppf);
		louis.signeAForm(*scf);

		louis.executeForm(*rrf);
		louis.executeForm(*ppf);
		louis.executeForm(*scf);

		std::cout << "ko : \n" << std::endl;

		louisette.signeAForm(*rrf);
		louisette.signeAForm(*ppf);
		louisette.signeAForm(*scf);

		louisette.executeForm(*rrf);
		louisette.executeForm(*ppf);
		louisette.executeForm(*scf);

//		std::cout << "ko no form : \n" << std::endl;

	//	louis.signeAForm(*notform);
	//	louis.executeForm(*notform);

		std::cout << "\n" << std::endl;
		delete rrf;
		delete ppf;
		delete scf;
	//	delete notform;
	}
	catch(std::exception& e)
	{
		std::cout << "error" << std::endl;
	}
}
