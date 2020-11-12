/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:10:24 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/12 18:29:54 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include <thread>         
#include <chrono> 
#include "Zombie.hpp"

class ZombieEvent
{
	private:
			std::string type;

	public:
			ZombieEvent();
			virtual ~ZombieEvent();

			void		setZombieType(std::string type);
			Zombie 		*newZombie(std::string name);
			Zombie		*randomChump(void);
};

#endif