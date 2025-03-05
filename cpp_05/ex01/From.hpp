#pragma once

class Form
{
	private:
		std::string _name;
		bool _signe;
		const int _gradeSigne;
		const int _gradeExec;

	public:
		Form(std::string name, const int gradeSigne, const int gradeExec);
		From(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		std::string getName() const;
		bool getSigned() const;
		const int getGradeSigne() const;
		const int getGradeExec() const;

		void beSigned(Bureaucrat other);


		void GradeTooLowException();
		void GradeTooHightException();
};
std::ostream& operator<<(std::ostream &os, Form const& other);
