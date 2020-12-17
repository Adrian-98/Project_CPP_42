/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:19:44 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/10 17:32:39 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static Form*	createPresidentialPardonForm(std::string const & target);
static Form*	createRobotomyRequestForm(std::string const & target);
static Form*	createShrubberyCreationForm(std::string const & target);


Intern::Intern()
{
    
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &other)
{
    void(other);
}

Intern &Intern::operator=(Intern const &other)
{
    void(other);
    return (*this);
}

const char* Intern::FormDoesntExists::what() const throw()
{
	return "[+] Exception: Form doesnt exist";
}

Form *Intern::makeForm(std::string const & form_name, std::string const & target)
{
    Form* rtn;
	typedef Form* (*func)(std::string const & target);
	typedef struct { std::string form_name; func func; } FormTypes;
	
	rtn = NULL;
	FormTypes	forms[] = 
	{
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for (int i = 0; i < 3; i++)
    {
		if (forms[i].form_name == form_name)
		{
			rtn = forms[i].func(target);
			std::cout << "[+] " << "Intern creates " << rtn->getName() << std::endl;
			return (rtn);
		}
    }
	throw Intern::FormDoesntExists(); 
	return (rtn);
}

static Form*	createPresidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target)); }
static Form*	createRobotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target)); }
static Form*	createShrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target)); }