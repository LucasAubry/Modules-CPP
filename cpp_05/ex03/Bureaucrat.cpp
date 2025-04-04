/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:47:10 by laubry            #+#    #+#             */
/*   Updated: 2025/04/02 16:13:32 by laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	this->_name = name;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHightException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat was created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat was deleted" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	return *this;
}

const char *Bureaucrat::GradeTooHightException::what() const throw()
{
	return "the grade is to hight sorry";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "the grade is to low sorry";
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}
	
int Bureaucrat::getGrade() const
{
	return this->_grade;	
}

void Bureaucrat::IncreGrade()
{
	if (this->_grade < 150)
		this->_grade = this->_grade + 1;
	else
		throw GradeTooLowException();
}

void Bureaucrat::DecreGrade()
{
	if (this->_grade > 1)
		this->_grade = this->_grade - 1;
	else
		throw GradeTooHightException();
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const& other)
{
	os << other.getName() << " bureaucrat grade " << other.getGrade();
	return os;
}

void Bureaucrat::signeAForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " <<
			e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << " because " <<
			e.what() << std::endl;
	}
}
