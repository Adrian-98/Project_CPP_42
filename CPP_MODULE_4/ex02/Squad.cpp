/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:04:12 by adrian            #+#    #+#             */
/*   Updated: 2020/12/02 18:06:18 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count(0), units(nullptr)
{
}

Squad::~Squad()
{
	if (this->units)
		delete[] this->units;
}

Squad::Squad(Squad const &other)
{
	*this = other;
}

Squad &Squad::operator=(Squad const &other) 
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = nullptr;
	}
	this->count = 0;
	for (int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return (*this);
}

int Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (this->count == 0 || index < 0 || index >= count)
		return (nullptr);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		ISpaceMarine **tmp = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			tmp[i] = this->units[i];
		delete[] this->units;
		this->units = tmp;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}