#pragma once

#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator=(const Intern& other);
		~Intern();
		AForm *makeForm(std::string FormName, std::string TargetForm);		
};
