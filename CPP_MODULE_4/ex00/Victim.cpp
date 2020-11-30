/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:58:49 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 18:58:51 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name):
	name(name)
{
	std::cout << "Some random victim called " << this->name << " just popped"  << std::endl;
}

Victim::Victim(Victim const &other):
	name(other.name)
{
	std::cout << "Some random victim called " << this->name << " just popped"  << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

Victim &Victim::operator=(Victim const &other)
{
	this->name = other.name;
	return (*this);
}

std::string const &Victim::getName(void) const
{
	return (this->name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer)
{
	out << "I'm " << sorcerer.getName() << " and I like otters !" << std::endl;
	return (out);
}