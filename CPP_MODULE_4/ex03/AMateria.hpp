/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:14:38 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/04 19:06:55 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
class AMateria
{
	protected:
			std::string type;
			unsigned int _xp;
	public:
			AMateria(std::string const & type);
			virtual ~AMateria();

			AMateria(AMateria const &other);
			AMateria &operator=(AMateria const &other);

			std::string const & getType() const; //Returns the materia type
			unsigned int getXP() const; //Returns the Materia's XP
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif