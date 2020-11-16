/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:05:50 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/16 19:44:29 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify(void) 
{
	return (this->brain.identify());
}

Brain &Human::getBrain(void)
{
	return(this->brain);
}