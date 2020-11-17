/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:23:07 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/17 19:17:22 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <iomanip>
#include <thread>         
#include <chrono> 
# include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanA
{
	private:
			std::string name;
			const Weapon &weapon;
	public:
			HumanA(std::string const &name, const Weapon &weapon);
			virtual ~HumanA();
			void attack(void) const;
};



#endif