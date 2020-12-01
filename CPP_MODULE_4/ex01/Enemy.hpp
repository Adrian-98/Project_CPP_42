/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:07:37 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:08:59 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	
	protected:
		Enemy();

		std::string type;
		int hp;
	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &other);
		virtual ~Enemy();

		Enemy &operator=(Enemy const &other);

		std::string const &getType(void) const;
		int getHP(void) const;

		virtual void takeDamage(int damage);
};




#endif