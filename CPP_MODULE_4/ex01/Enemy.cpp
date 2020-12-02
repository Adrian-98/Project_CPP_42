/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:10:03 by adrian            #+#    #+#             */
/*   Updated: 2020/12/02 19:20:16 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy():
	type(std::string()), hp(0)
{
}

Enemy::Enemy(int hp, std::string const &type):
	type(type), hp(hp)
{
}

Enemy::Enemy(Enemy const &other)
{
	*this = other;
}

Enemy &Enemy::operator=(Enemy const &other)
{
	this->type = other.type;
	this->hp = other.hp;
	return (*this);
}

Enemy::~Enemy()
{
	std::cout << "Enemy DEAD :S\n";
}

std::string const &Enemy::getType(void) const
{
	return (this->type);
}

int Enemy::getHP(void) const
{
	return (this->hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	this->hp -= damage;
	if (this->hp < 0)
		this->hp = 0;
}
