/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PresidentialPardonForm.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:54:07 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 18:41:28 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string const &PresidentialPardonForm::name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form(PresidentialPardonForm::name, 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other):
	Form(other), target(other.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
