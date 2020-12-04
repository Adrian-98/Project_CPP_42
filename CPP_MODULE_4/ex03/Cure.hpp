/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:15:17 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/04 18:47:48 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	virtual ~Cure();

	Cure &operator=(Cure const &other);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
