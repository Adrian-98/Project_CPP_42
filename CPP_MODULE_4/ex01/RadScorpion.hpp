/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:20:01 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:20:03 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &other);
	virtual ~RadScorpion();

	RadScorpion &operator=(RadScorpion const &other);

	using Enemy::takeDamage;
};

#endif