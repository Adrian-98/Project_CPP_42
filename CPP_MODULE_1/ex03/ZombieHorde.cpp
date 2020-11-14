/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:37:58 by adrian            #+#    #+#             */
/*   Updated: 2020/11/14 17:03:18 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n, std::string type)
{
	this->n = n;
	for(int i = 0; i < n; i++)
	{
		this->zombie[i] = new Zombie(zombie[i]->randomname(), type);
		zombie[i]->announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	for(int i = 0; i < this->n; i++)
	{
		delete this->zombie[i];
		std::cout << "zombie eliminado\n";
	}
}
