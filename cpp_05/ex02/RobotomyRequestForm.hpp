#pragma once

#include "cstdlib"
#include "AForm.hpp"
#include "fstream"

class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &executor) const;
};
