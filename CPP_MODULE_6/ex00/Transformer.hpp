/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transformer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:00:14 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/10 18:21:07 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

class Transformer
{
        private:
                Transformer();
                std::string str;
                int type;
                
                int ivalue;
	            float fvalue;
	            double dvalue;
	            char cvalue;
                

                enum type {
                        TypeChar,
	            	TypeInt,
                        TypeFloat,
                        TypeDouble,
                        TypeLong,
                        TypeInvalid
                };
        public:  
                Transformer(std::string const &value);
                virtual ~Transformer();
                Transformer(Transformer const &copy);
                Transformer &operator=(Transformer const &other);
};

#endif