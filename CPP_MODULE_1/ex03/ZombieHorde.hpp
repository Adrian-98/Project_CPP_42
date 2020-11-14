/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 16:35:15 by adrian            #+#    #+#             */
/*   Updated: 2020/11/14 17:02:21 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include <thread>         
#include <chrono> 
#include "Zombie.hpp"

class ZombieHorde
{
	private:
			int n;
			Zombie **zombie;
	public:
			ZombieHorde(int n, std::string type);
			virtual ~ZombieHorde();	
};


#endif