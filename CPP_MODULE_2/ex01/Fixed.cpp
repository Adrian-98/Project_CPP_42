/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:16:29 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/23 17:28:55 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called "<<std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout<<"Default integer constructor called "<<std::endl;
	this->value = (value << this->b);

}

Fixed::Fixed(const float value)
{
	std::cout<<"Default float constructor called "<<std::endl;
	this->value = roundf(value * (1 << this->b));
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
	this->value = a.value;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->b));
}

int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called "<<std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called "<<std::endl;
	this->value = raw;
}

int Fixed::toInt(void) const
{
	return (this->value >> this->b);
}