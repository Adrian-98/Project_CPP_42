/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:45:46 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/16 20:07:50 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string Brain::identify(void)
{
	std::stringstream address;

    address << this;
    return (address.str());
}

Brain::Brain()
{
	std::cout << "Introducir numero de neuronas\n";
	std::cin >> this->brain_cells;
	std::cout << "Introducir IQ\n";
	std::cin >> this->iq;
	
}

Brain::Brain(int brain_cells, int iq)
{
	this->brain_cells = brain_cells;
	this->iq = iq;
	std::cout << this->brain_cells << "\n" << this->iq << "\n";
}

Brain::~Brain()
{
}