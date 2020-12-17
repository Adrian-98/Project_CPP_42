/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:34:01 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/17 17:18:51 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() :
        n(0)
{
}

Span::Span(unsigned int n) :
        n(n)
{
}

Span::Span(const Span &other) :
        n(other.n)
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
		this->n = other.n;
		this->vector = other.vector;
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

const char* Span::InvalidArgument::what() const throw()
{
	return "SpanException: invalid argument";
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
    this->vector.insert(this->vector.end(), numbers.begin(), numbers.end());
}

void Span::addNumber(int from, int to)
{
	if (from > to)
		throw Span::InvalidArgument();

	int diff = to - from;

	if (this->vector.size() + diff > this->n)
		throw Span::FullSpanException();

	for (int index = from; index < to; ++index)
		this->vector.push_back(index);
}

void Span::addNumber(Span const &other)
{
	addNumber(other.vector);
}

int Span::shortestSpan() const
{
	if (this->vector.size() <= 1)
		throw Span::NotEnoughNumbersException();
	std::vector<int> copy = std::vector<int>(this->vector);
	std::sort(copy.begin(), copy.end());
	
	int shortest = -1;
	for (unsigned int index = 0; index < this->vector.size() - 1; index++)
	{
		int diff = std::abs(vector[index] - vector[index + 1]);

		if (shortest == -1 || diff < shortest)
			shortest = diff;
	}
	return (shortest);
}

int Span::longestSpan() const
{
	if (this->vector.size() <= 1)
		throw Span::NotEnoughNumbersException();
	int max = *std::max_element(vector.begin(), vector.end());
	int min = *std::min_element(vector.begin(), vector.end());
	
	return (max - min);
}

void Span::dump()
{
	for (unsigned int index = 0; index < this->vector.size(); ++index)
		std::cout << vector[index] << (index < this->vector.size() - 1 ? ", " : "");

	std::cout << std::endl;
}