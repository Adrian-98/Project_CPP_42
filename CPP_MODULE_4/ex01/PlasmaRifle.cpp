/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:01:36 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:46:36 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other):
	AWeapon(other)
{
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->dmg = other.dmg;
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}