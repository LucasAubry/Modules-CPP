#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbey form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm was delated " << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->_target = other._target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw GradeIsSignedException();
	else if (executor.getGrade() > this->getGradeSigne())
		throw GradeTooLowException();
	std::ofstream File_shru(std::string(this->_target + "_shrubbery").c_str());
	if (!File_shru)
	{
		std::cout << "Error cant open the file" << std::endl;
		return;
	}
	File_shru << "	           /\\				" << '\n';	
	File_shru << "            <  >				" << '\n';	
	File_shru << "             \\/				" << '\n';			
	File_shru << "             /\\				" << '\n';
	File_shru << "            /  \\				" << '\n';
	File_shru << "           /++++\\				" << '\n';			
	File_shru << "          /  ()  \\			" << '\n';		
	File_shru << "          /      \\			" << '\n';
	File_shru << "         /~`~`~`~`\\			" << '\n';	
	File_shru << "        /  ()  ()  \\			" << '\n';	
	File_shru << "       /            \\			" << '\n';		
	File_shru << "       / &*&*&*&*&*& \\		" << '\n';		
	File_shru << "      /  ()  ()  ()  \\		" << '\n';		
	File_shru << "      /               \\		" << '\n';			
	File_shru << "     /+++++++++++++++++\\		" << '\n';			
	File_shru << "    /  ()  ()  ()  ()   \\		" << '\n';			
	File_shru << "    /                   \\		" << '\n';			
	File_shru << "   /~`~`~`~`~`~`~`~`~`~`\\		" << '\n';			
	File_shru << "  /  ()  ()  ()  ()  ()  \\	" << '\n';				
	File_shru << "  / &*&*&*&*&*&*&*&*&*&*& \\	" << '\n';				
	File_shru << " /                        \\	" << '\n';			
	File_shru << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\	" << '\n';			
	File_shru << "           |   |				" << '\n';		
	File_shru << "          |`````|				" << '\n';		
	File_shru << "          \\_____/				" << '\n';		
	File_shru << " 								" << std::endl;
	File_shru.close();						
}
