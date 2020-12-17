/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:34:01 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/16 20:15:32 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() :
        _n(0)
{
}

Span::Span(unsigned int n) :
        _n(n)
{
}

Span::Span(const Span &other) :
        _n(other._n)
{
	this->operator =(other);
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_n = other._n;
		this->_vector = other._vector;
	}

	return (*this);
}

const char* Span::FullSpanException::what() const throw()
{
	return "SpanException: Span is already full";
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "SpanException: not enough numbers in Span";
}

void Span::addNumber(int number)
{
    if (this->vector.size() >= this->n)
        throw Span::FullSpanException();
    this->vector.push_back(number);
}

void Span::addNumber(std::vector<int> const &numbers)
{
    if (numbers.empty())
        return ;
    if (this->vector.size() + numbers.size() >= this->n)
        throw Span::FullSpanException();
    this->_vector.insert(this->_vector.end(), numbers.begin(), numbers.end());
}

void Span::addNumber(int from, int to)
{
	if (from > to)
		throw SpanException::illegalArgument();

	int diff = to - from;

	if (this->_vector.size() + diff > this->_n)
		throw SpanException::capacityReached();

	for (int index = from; index < to; ++index)
		this->_vector.push_back(index);
}

void Span::addNumber(Span const &other)
{
	addNumber(other._vector);
}