/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.ipp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:09:34 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/15 19:01:13 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() :length(0), elts(nullptr)
{
}

template<typename T>
Array<T>::Array(size_t n) : length(n), elts(nullptr)
{
    this->elts = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &other): length(0), elts(nullptr)
{
    if (other.length > 0)
    {
        this->elts = new T[other.length]();
        for (size_t i = 0; i < other.length; i++)
            this->elts[i] = other.elts[i];
    }
    this->length = other.length;
}

template<typename T>
Array<T>::~Array()
{
	if (this->length > 0)
		delete[] this->elts;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (this->length > 0)
		delete[] this->elts;
	this->elts = nullptr;
	if (other.length > 0)
	{
		this->elts = new T[other.length]();
		for (size_t i = 0; i < other.length; i++)
			this->elts[i] = other.elts[i];
	}
	this->length = other.length;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
	if (index >= this->length)
		throw Array::OutOfBoundsException();
	return (this->elts[index]);
}

template<typename T>
T const &Array<T>::operator[](size_t index) const
{
	return (operator[](index));
}

template<typename T>
size_t Array<T>::size(void) const
{
	return (this->length);
}