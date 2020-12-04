/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:16:03 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/04 20:06:48 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	amount(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &other):
	amount(0)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
	this->amount = 0;
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->amount  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i] == m)
			return ;
	this->sources[this->amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (nullptr);
}