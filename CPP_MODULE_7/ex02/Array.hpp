/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:08:28 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/15 19:04:19 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <exception>
# include <cctype>


template<typename T>
class Array
{
    private:
        size_t length;
        T *elts;
    public:
        Array();
        Array(size_t n);
        Array(Array<T> const &other);
        virtual ~Array();

        class OutOfBoundsException: public std::exception {
            virtual const char* what() const throw();
        };

        Array &operator=(Array const &other);
        T &operator[](size_t index);
        T const &operator[](size_t index) const;

        size_t size(void) const;
};

#include "Array.ipp"

#endif