#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string _name;
		bool _signe;
		int _gradeSigne;
		int _gradeExec;
		AForm();
	public:
		AForm(std::string name, const int gradeSigne, const int gradeExec);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		virtual ~AForm();

		std::string getName() const;
		bool getSigned() const;
		int getGradeSigne() const;
		int getGradeExec() const;

		void beSigned(const Bureaucrat &other);

		class GradeTooHightException: public std::exception
		{
			const char *what() const throw();
		};
	
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};

		class GradeIsSignedException: public std::exception
		{
			const char *what() const throw();
		};
		virtual void execute(Bureaucrat const &executor) const = 0;


};
std::ostream& operator<<(std::ostream &os, AForm const& other);
