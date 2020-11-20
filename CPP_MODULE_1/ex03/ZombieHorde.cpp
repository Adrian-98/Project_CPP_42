/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:37:58 by adrian            #+#    #+#             */
/*   Updated: 2020/11/16 17:56:01 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n, std::string type)
{
	this->n = n;
	for(int i = 0; i < n; i++)
	{
		this->zombie[i] = new Zombie(type, zombie[i]->randomname());
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
