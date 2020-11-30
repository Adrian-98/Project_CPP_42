/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:40:55 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 19:25:03 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title\
			<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
{
	std::cout << other.get_name() << ", " << other.get_title() << ", is born!" << std::endl;
	*this = other;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	name = other.name;
	title = other.title;
	return (*this);
}

void Sorcerer::polymorph(Victim const &victim)
{
	victim.getPolymorphed();
}

std::string const &Sorcerer::get_name(void) const
{
	return (this->name);
}

std::string const &Sorcerer::get_title(void) const
{
	return (this->title);
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies\n";
	return (out);
}