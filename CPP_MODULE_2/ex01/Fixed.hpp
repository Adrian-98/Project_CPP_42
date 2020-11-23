/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:01:02 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/23 17:28:18 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
	private:
			static const int b = 8;
			int value;
	public:
			Fixed();
			Fixed(const int value);
			Fixed(const float value);
			virtual ~Fixed();
			Fixed (const Fixed &a);
			Fixed  &operator=(const Fixed &a);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			float toFloat(void) const;
			int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif
