#pragma one

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
//	Bureaucrat& operator <
	~Bureaucrat();

	GradeTooHightException();
	GradeTooLowExecption();
	
	IncreGrade();
	DecreGrade();
}
