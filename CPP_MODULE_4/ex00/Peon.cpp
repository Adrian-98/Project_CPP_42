/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:59:52 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 18:59:54 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name):
	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &other):
	Victim(other.name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(Peon const &other)
{
	this->name = other.name;
	return (*this);
}


void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
