/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:34:50 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 18:50:04 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SORCERER_HPP
#define SORCERER_HPP


#include <iostream>
# include "Victim.hpp"

class Sorcerer
{
		private:
				Sorcerer();
				std::string name;
				std::string title;
	
		public:
				Sorcerer(std::string name, std::string title);
				virtual ~Sorcerer();

				Sorcerer(const Sorcerer &other);
				Sorcerer  &operator=(const Sorcerer &other);
				
				void polymorph(Victim const &victim);
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);




#endif

