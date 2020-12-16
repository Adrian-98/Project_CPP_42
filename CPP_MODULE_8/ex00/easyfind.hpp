/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 19:28:52 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/16 18:58:28 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <map>
# include <algorithm>
#include <iostream>
#include <vector>
#include <string.h>

template<typename T>
void easyfind(T &a, int n)
{
    typename T::iterator found;
    found = std::find(a.begin(), a.end(), n);
    if (found != a.end())
        std::cout << "Value has been found!\n---------\n";
    else 
        std::cout << "Value has not been found!\n--------\n";
}



#endif