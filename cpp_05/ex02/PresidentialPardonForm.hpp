#pragma once

#include "AForm.hpp"
#include "fstream"

class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
};

