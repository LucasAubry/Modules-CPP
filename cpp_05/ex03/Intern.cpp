#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "intern was created" << std::endl;
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{
	std::cout << "intern was deleated" << std::endl;
}

AForm *makePresidential(std::string target)
{
	std::cout << "creates" << "Presidential Pardon Form" << std::endl;
	return new PresidentialPardonForm(target);
}

AForm *makeRobotomy(std::string target)
{
	std::cout << "creates" << "Robotomy Request Form" << std::endl;
	return new RobotomyRequestForm(target);
}

AForm *makeShrubbery(std::string target)
{
	std::cout << "creates" << "Shrubbey Creation Form" << std::endl;
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string FormName, std::string target)
{
	std::string tab[3] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
	AForm *(*functab[3])(std::string) = {makePresidential, makeRobotomy, makeShrubbery};
	for (int i = 0; i != 3; i++)
	{
		if (FormName == tab[i])
			return (functab[i](target));
	}
	std::cout << "cant create Form" << std::endl;
	return (NULL);
}
