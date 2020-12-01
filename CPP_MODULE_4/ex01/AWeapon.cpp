/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:52:19 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 19:48:58 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon():
	name(std::string()), apcost(0), dmg(0)
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): name(name), apcost(apcost), dmg(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	name = other.name;
	apcost = other.apcost;
	dmg = other.dmg;
	return (*this);
}

std::string const &AWeapon::getName(void) const
{
	return (this->name);
}

int AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int AWeapon::getDamage(void) const
{
	return (this->dmg);
}