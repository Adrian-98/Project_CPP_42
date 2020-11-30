/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:22:40 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 17:46:10 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string _name) : ClapTrap(_name, 100, 100, 120, 120, 1, 60, 20, 5) , FragTrap(_name), NinjaTrap(_name)
{
	std::cout << this->name << ": SUPER CREATING." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &other): ClapTrap(other.name, other.hit_points, other.max_hit_points,
 other.energy_points, other.max_energy_points, other.level, other.melee_attack_damage, other.ranged_attack_damage, other.armor_damage_reduction), FragTrap(other.name), NinjaTrap(other.name)
{
	std::cout<<"Copy constructor called "<<std::endl;
	*this = other;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
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

SuperTrap::~SuperTrap()
{
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}