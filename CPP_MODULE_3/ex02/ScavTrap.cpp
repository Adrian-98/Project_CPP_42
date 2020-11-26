/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:43:50 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/26 18:37:58 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << name <<" you have been chosen, prepare for CHALLENGES...\n";
	
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout<<"Copy constructor called "<<std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " Well played, doors are now open..... \n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "I'm catching my breath.....\n";
	hit_points += amount;
	if (hit_points > max_hit_points)
		hit_points = max_hit_points;
	energy_points += 10;
	if (energy_points > max_energy_points)
		energy_points = max_energy_points;	
}

int ScavTrap::challengeNewcomer(std::string const &target)
{
	int i = 0;

	std::string names[] = {"Doge the logs", "FLOOR is LAVA", "Raining Snakes", "Fall down the split", "Wolfs set free", "Face the Caterpil"};
	
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	std::srand(std::time(0));

	i = std::rand() % 6;
	std::cout << "Challenge: "<< names[i] << " attack against " << target << std::endl;
	if (i == 0)
		return (FIRE_BLUSTER);
	if (i == 1)
		return (SNIPER_HEADSHOT);
	if (i == 2)
		return (KNIFED);
	if (i == 3)
		return (NAPAL);
	if (i == 4)
		return (GRANADE);
	else
		return (TOMAHOWK);
}
