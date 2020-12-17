/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 12:28:42 by adrian            #+#    #+#             */
/*   Updated: 2020/12/17 12:59:20 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
# include <queue>
#include <cstdlib>
# include <stack>

template<typename T>
class Mutantstack : public std::stack<T>
{
		public:
			typedef typename std::stack<T>::container_type::iterator iterator;
			
			Mutantstack() : std::stack<T>()
			{
			}

			Mutantstack(const Mutantstack &other) : std::stack<T>(other)
			{
			}

			virtual ~Mutantstack()
			{
			}

			Mutantstack &operator=(const Mutantstack &other)
			{
				std::stack<T>::operator =(other);
			}

			iterator begin()
			{
				return std::stack<T>::c.begin();
			}

			iterator end()
			{
				return std::stack<T>::c.end();
			}
};



#endif