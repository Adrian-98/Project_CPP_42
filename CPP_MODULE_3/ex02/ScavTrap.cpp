/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 18:43:50 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/27 17:38:44 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << name <<" you have been chosen, prepare for CHALLENGES...\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.name, other.hit_points, other.max_hit_points,
 other.energy_points, other.max_energy_points, other.level, other.melee_attack_damage, other.ranged_attack_damage, other.armor_damage_reduction)
{
	std::cout<<"Copy constructor called "<<std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
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
