/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 19:16:31 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/23 20:27:15 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <iomanip> 
# include <string>
#include <sstream>

class Fixed
{
	private:
			static const int w = 8;
			int b;
	public:
			Fixed();
			virtual ~Fixed();
			Fixed (const Fixed &a);
			Fixed  &operator=(const Fixed &a);
			int getRawBits(void) const;
			void setRawBits(int const raw);
};

#endif