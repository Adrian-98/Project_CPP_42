/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:22:28 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/17 19:05:08 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <iomanip>
#include <thread>         
#include <chrono> 
# include <string>
#include <sstream>

class Weapon
{
	private:
			std::string type;
	public:
			Weapon(std::string const &name);
			Weapon();
			virtual ~Weapon();
			const std::string &getType(void) const;
			void setType(std::string const &type);
};




#endif