/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transformer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:00:07 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/10 17:28:50 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Transformer.hpp"

Transformer::Transformer(std::string &value) :
str(value), type(TypeInvalid)
{
    if (str[str.lentgh() - 1] == 'f')
        type = TypeFloat;
    std::cout << type << std::endl;
    
}

Interpreter::~Interpreter()
{
}

Interpreter &Interpreter::operator=(Interpreter const &other)
{
	this->str = other.str;
	this->type = other.type;
	// for (int i = 0; i < 4; i++)
	// 	this->status[i] = other.status[i];
	this->ivalue = other.ivalue;
	this->fvalue = other.fvalue;
	this->dvalue = other.dvalue;
	this->cvalue = other.cvalue;
	return (*this);
}

Interpreter::Interpreter(Interpreter const &other):
	str(other.str), type(other.type),
	ivalue(other.ivalue), fvalue(other.fvalue),
	dvalue(other.dvalue), cvalue(other.cvalue)
{
	// for (int i = 0; i < 4; i++)
	// 	this->status[i] = other.status[i];
}