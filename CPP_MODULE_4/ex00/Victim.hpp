/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:55:13 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/30 19:02:07 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
		protected:
				Victim();
				std::string name;
		public:
				Victim(std::string const &name);
				Victim(const Victim& other);
				virtual ~Victim();

				Victim &operator=(const Victim& other);

				std::string const &getName(void) const;
				virtual void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer);

#endif
