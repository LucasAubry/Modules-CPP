#pragma once
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string _name;
		bool _signe;
		int _gradeSigne;
		int _gradeExec;
	public:
		Form(std::string name, const int gradeSigne, const int gradeExec);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		std::string getName() const;
		bool getSigned() const;
		int getGradeSigne() const;
		int getGradeExec() const;

		void beSigned(Bureaucrat &other);

		class GradeTooHightException: public std::exception
		{
			const char *what() const throw();
		};
	
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &os, Form const& other);
