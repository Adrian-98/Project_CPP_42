/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:39:51 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:50 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	name = other.name;
	grade = other.grade;
	return (*this);
}

std::string const &Bureaucrat::getName(void) const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

void Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.isSigned())
	{
		std::cout << *this << " cannot sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->grade)
	{
		std::cout << *this << " cannot sign " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signs " << form << std::endl;
	}
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form const &form) const
{
	if (!form.isSigned())
	{
		std::cout << *this << " cannot execute " << form
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getExecuteGrade() < this->grade)
	{
		std::cout << *this << " cannot execute " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " executes " << form << std::endl;
	}
	form.execute(*this);
}