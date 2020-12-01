/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutan.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:11:53 by adrian            #+#    #+#             */
/*   Updated: 2020/12/01 18:49:44 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &other);
	virtual ~SuperMutant();

	SuperMutant &operator=(SuperMutant const &other);

	void takeDamage(int damage);
};

#endif