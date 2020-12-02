/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:14:30 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/02 19:22:55 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_xp = 0;
	this->type = type;
}

AMateria::~AMateria()
{
}


AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	this->type = other.type;
	this->_xp = other._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}