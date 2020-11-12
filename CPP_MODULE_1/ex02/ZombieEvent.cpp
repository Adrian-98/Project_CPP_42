/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:18:48 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/12 19:15:11 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;	
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *zombie = ZombieEvent::newZombie(Zombie::randomname());
	zombie->announce();
	return (zombie);	
}