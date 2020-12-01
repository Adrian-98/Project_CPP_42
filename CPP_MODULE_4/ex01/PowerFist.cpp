/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:07:12 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:49:08 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &other):
	AWeapon(other)
{
}

PowerFist::~PowerFist()
{
}

PowerFist &PowerFist::operator=(PowerFist const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->dmg = other.dmg;
	return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
