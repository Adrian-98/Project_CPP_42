/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:14:53 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/04 18:49:21 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
private:
public:
	Ice();
	Ice(Ice const &other);
	virtual ~Ice();

	Ice &operator=(Ice const &other);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
