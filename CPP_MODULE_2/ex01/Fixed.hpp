/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 19:01:02 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/11/20 19:46:12 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <cmath>

class Fixed
{
	private:
			static const int w = 8;
			int value;
	public:
			Fixed();
			Fixed(const int a);
			Fixed(const float a);
			virtual ~Fixed();
			Fixed (const Fixed &a);
			Fixed  &operator=(const Fixed &a);
			int getRawBits(void) const;
			void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif
