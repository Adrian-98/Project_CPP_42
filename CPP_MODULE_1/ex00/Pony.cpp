/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:07:22 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/11 19:12:01 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 		Pony::think(void)
{
	std::cout << "el pony color " << this->color << " esta pensando\n";
}

void 		Pony::run(void)
{
	std::cout << "el pony color " << this->color << " esta corriendo\n";
}

Pony::Pony(std::string color)
{
	this->color = color;
}

Pony::~Pony()
{
}