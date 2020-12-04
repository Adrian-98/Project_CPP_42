/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:15:32 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/04 18:30:48 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Characeter::Character(std::string const &name): name(name), equipped(0)
{	
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Characeter::~Character()
{
}

Characeter::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	this->equipped = 0;
	for (int i = 0; i < other.equipped; i++)
		this->equip(other.inventory[i]->clone());
	for (int i = this->equipped; i < 4; i++)
		this->inventory[i] = nullptr;
	return (*this);
}
