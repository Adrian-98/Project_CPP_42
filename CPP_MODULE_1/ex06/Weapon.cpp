/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:21:59 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/17 19:05:43 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(std::string const &name)
{
	type = name;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{	
	return (this->type);
}

void		Weapon::setType(std::string const &type)
{
	this->type = type;
	// std::cout << "cmbiamos el tipo =   " << this->type << std::endl;
}