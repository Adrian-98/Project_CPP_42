/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idenify.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:31:47 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/15 16:39:56 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

# include <iostream>
# include <random>
# include "Base.hpp"
# include "Aclass.hpp"
# include "Bclass.hpp"
# include "Cclass.hpp"

Base *generate(void);

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif
