/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transformer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:00:07 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/14 18:32:02 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Transformer.hpp"

Transformer::Transformer(std::string const &value) :
str(value), type(TypeInvalid)
{
	if (str.length() == 1 && isascii(str[0]) && !isdigit(str[0]) && type == TypeInvalid)
		type = TypeChar;
	if ((str[0] == '-' || str[0] == '+') && isdigit(str[1]))
		str.erase(0, 1);
	std::cout << str << std::endl;
    if (str[str.length() - 1] == 'f' && type == TypeInvalid)
	{
		try
		{
			if (str[str.length() - 2] != 'n')
				type = TypeFloat;
			else if (str.compare("nanf") == 0 && type == TypeInvalid)
				type = TypeFloat;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}			
        
	}
	for (int i = 0; i < (int)str.length();)
	{
		if (isdigit(str[i]) != 0)
			i++;
		else
			break ;
		if (i == (int)(str.length()) && type == TypeInvalid)
			type = TypeInt;
	}
	int flag = 0;
	int count = 0;
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (isdigit(str[i]) != 0)
			count++;
		else if (str[i] == '.')
			flag = 1;
		if (count == (int)(str.length() - 1) && flag == 1 && type == TypeInvalid)
			type = TypeDouble;			
	}
	if (type == TypeFloat)
    {
		char c;
		int i;
		float f  = std::stof(str);
		double d = std::stod(str);
		try
		{
			c = '*';
			i = std::stoi(str);
		}
		catch(const std::exception& e)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << f << "f"<< std::endl;
			std::cout << "double: " << d << std::endl;
			type = 4;
		}
		
		if (type != 4)
		{
			std::cout << "char:  '" << c << "'"<< std::endl;
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << f << "f"<< std::endl;
			std::cout << "double: " << d << std::endl;
		}
	}
	else if (type == TypeInt)
    	std::cout << "int" << std::endl;
	else if (type == TypeChar)
    	std::cout << "char" << std::endl;
	else if (type == TypeDouble)
    	std::cout << "double" << std::endl;
	else 
		std::cout << "other" << std::endl;
    
}

Transformer::~Transformer()
{
}

Transformer &Transformer::operator=(Transformer const &other)
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

Transformer::Transformer(Transformer const &other):
	str(other.str), type(other.type),
	ivalue(other.ivalue), fvalue(other.fvalue),
	dvalue(other.dvalue), cvalue(other.cvalue)
{
	// for (int i = 0; i < 4; i++)
	// 	this->status[i] = other.status[i];
}