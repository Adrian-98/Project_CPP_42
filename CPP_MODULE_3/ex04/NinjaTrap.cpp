/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:41:36 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/27 19:57:21 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"


NinjaTrap::NinjaTrap(std::string _name) : ClapTrap(_name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << this->name << ": setting up traps..." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other): ClapTrap(other.name, other.hit_points, other.max_hit_points,
 other.energy_points, other.max_energy_points, other.level, other.melee_attack_damage, other.ranged_attack_damage, other.armor_damage_reduction)
{
	std::cout<<"Copy constructor called "<<std::endl;
	*this = other;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
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

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " swing is Katana and deals "
			<< this->melee_attack_damage << " points of damage to "
			<< target << "!" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " throw a Shuriken at "
			<< target << " and deals " << this->ranged_attack_damage
			<< " points of damage!" << std::endl;
}


NinjaTrap::~NinjaTrap()
{
	std::cout << name << " All traps have been defused\n";
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << this->name << " tries to tickle " << trap.getName()
			<< " but realize he has no feets." << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->energy_points >= 20)
	{
		this->energy_points -= 20;
		std::cout << this->name << " try to cut trough " << trap.getName()
				<< " and damage him for " << this->ranged_attack_damage << "!" << std::endl;
	}
	else
		std::cout << this->name << " is too tired." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if ((rand() % 100) > 50)
	{
		std::cout << this->name << " throw Shuriken at " << trap.getName()
				<< " and damage him for " << this->ranged_attack_damage << "!" << std::endl;
	}
	else
	{
		std::cout << this->name << " throw Shuriken at " << trap.getName()
				<< " but misses" << std::endl;
	}
}