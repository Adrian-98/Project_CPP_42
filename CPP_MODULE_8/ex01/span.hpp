/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:34:08 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/17 17:23:57 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <exception>
# include <iostream>
#include <list>
#include <vector>


class Span
{
    private: 
            unsigned int n;
            std::vector<int> vector;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);

        virtual ~Span();

        Span& operator=(const Span &other);

        void addNumber(int number);
        void addNumber(std::vector<int> const &numbers);
        void addNumber(int from, int to);
        void addNumber(Span const &other);
        void dump();

        int shortestSpan() const;
        int longestSpan() const;

        class FullSpanException: public std::exception {
                virtual const char* what() const throw();
        };
        class NotEnoughNumbersException: public std::exception {
                virtual const char* what() const throw();
        };
        class InvalidArgument: public std::exception{
                virtual const char* what() const throw();
        };
};


#endif
