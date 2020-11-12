/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:57:33 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/12 18:26:17 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

// int main(void)
// {
// 	ZombieEvent muerto;
	
// 	muerto.randomChump();
	
// 	return (0);
// }

#define COUNT	5

// void fightInNeighborTown(void)
// {
// 	Zombie redZombies[COUNT];
// 	Zombie blueZombies[COUNT];

// 	std::cout << "## Creating " << COUNT << " Red and Blue Zombie" << std::endl;
// 	for (int i = 0; i < COUNT; i++)
// 	{
// 		redZombies[i].setCharacteristics("Red", Zombie::randomName());
// 		blueZombies[i].setCharacteristics("Blue", Zombie::randomName());
// 	}
// 	std::cout << "## They fight" << std::endl;
// 	for (int i = 0; i < COUNT; i++)
// 	{
// 		redZombies[i].announce();
// 		blueZombies[i].announce();
// 	}
// 	std::cout << "## Fight is over, nobody won" << std::endl;
// }

int main(void)
{
	ZombieEvent lurkers;
	ZombieEvent snipers;
	Zombie *lurkersZombies[COUNT];
	Zombie *snipersZombies[COUNT];

	lurkers.setZombieType("Lurker");
	std::cout << "# Creating " << COUNT << " Lurker Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		lurkersZombies[i] = lurkers.randomChump();
	snipers.setZombieType("Sniper");
	std::cout << "# Creating " << COUNT << " Sniper Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		snipersZombies[i] = snipers.randomChump();
	std::cout << "# There is a Fight in the neighbor town" << std::endl;
	//fightInNeighborTown();
	std::cout << "# Back to the main City" << std::endl;
	std::cout << "# They fight, and nobody win" << std::endl;
	std::cout << "# Clean All Lurker Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete lurkersZombies[i];
	std::cout << "# Clean All Sniper Zombies" << std::endl;
	for (int i = 0; i < COUNT; i++)
		delete snipersZombies[i];
	return (0);
}
