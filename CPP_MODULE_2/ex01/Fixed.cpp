/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:16:29 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/20 19:46:59 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int a)
{
	std::cout<<"Default integer constructor called "<<std::endl;
	this->value = 0;

}

Fixed::Fixed(const float a)
{
	std::cout<<"Default float constructor called "<<std::endl;
	this->value = value << this->b;
}


Fixed::~Fixed()
{
	std::cout<<"Destructor called "<<std::endl;
}


Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called "<<std::endl;
	*this = a;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	std::cout<<"Assignation operator called "<<std::endl;
	this->b = a.b;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called "<<std::endl;
	return (this->b);
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called "<<std::endl;
	this->b = raw;
}