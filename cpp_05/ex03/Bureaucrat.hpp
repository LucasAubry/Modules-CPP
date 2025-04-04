#pragma once

#include "iostream"
#include "stdexcept"
#include "string"
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	class GradeTooHightException: public std::exception
	{
		public:
			const char *what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
			const char *what() const throw();
	};

	void IncreGrade();
	void DecreGrade();
	std::string getName() const;
	int getGrade() const;

	void signeAForm(AForm &form) const;
	void executeForm(AForm const &form);
};
std::ostream& operator<<(std::ostream &os, Bureaucrat const& other);
