/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:07:21 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/12 19:41:25 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Died" << std::endl;
}

void		Zombie::announce()
{
	std::cout << "New zombie called " << this->name << "(" << this->type << ")"
	<< "Braaaaaiiiiinns.......:S\n";
}

std::string  Zombie::randomname(void)
{
	int i = 0;
	
	std::string names[] = {"EL GONCHO", "EL PEPE", "EL JOSE", "EL Igna", "EL FERNANDITO", "MALAMANERA"};
	
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::srand(std::time(0));

	i = std::rand() % 6;
	return (names[i]);
}