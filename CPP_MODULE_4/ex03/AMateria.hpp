/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 14:42:59 by ncolomer          #+#    #+#             */
/*   Updated: 2020/12/04 20:00:09 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	private:
			AMateria();
	protected:
			std::string type;
			unsigned int _xp;
	public:
			AMateria(std::string const &type);
			virtual ~AMateria();
			
			AMateria(AMateria const &other);
			AMateria &operator=(AMateria const &other);
			
			std::string const &getType(void) const;
			unsigned int getXP(void) const;
			virtual AMateria *clone(void) const = 0;
			virtual void use(ICharacter &target);
};

#endif
