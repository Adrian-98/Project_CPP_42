/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 18:42:29 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/27 19:40:27 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	private:
			NinjaTrap();
	public:
			NinjaTrap(std::string _name);
			NinjaTrap(NinjaTrap const &other);
			virtual ~NinjaTrap();
			NinjaTrap &operator=(NinjaTrap const &other);

			void	rangedAttack(std::string const &target);
			void	meleeAttack(std::string const &target);
			void 	ninjaShoebox(FragTrap &trap);
			void 	ninjaShoebox(ScavTrap &trap);
			void 	ninjaShoebox(NinjaTrap &trap);
};



#endif