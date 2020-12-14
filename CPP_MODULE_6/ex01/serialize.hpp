/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:34:18 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/14 20:14:35 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <string>
#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);

Data *deserialize(void *raw);

#endif