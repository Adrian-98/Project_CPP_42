/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:04:28 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/12 18:29:38 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
#include <thread>         
#include <chrono> 
# include <string>

class Zombie
{
	private:
			std::string name;
			std::string type;
	public:
			Zombie(std::string name, std::string type);
			virtual ~Zombie();
			void	announce();
			static std::string	randomname();
};


#endif