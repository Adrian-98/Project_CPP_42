/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutan.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:12:23 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 19:50:58 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutan.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

SuperMutant::SuperMutant(SuperMutant const &other):
	Enemy(other)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}