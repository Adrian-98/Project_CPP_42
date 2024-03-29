/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notebook.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:49:46 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/18 17:10:37 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOTEBOOK_HPP
# define NOTEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"
#include <stdio.h>
#include <ctype.h>

class Notebook
{
	private:
			Contact contacts[8];
			int amount;	

	public:	
			Notebook();
			virtual ~Notebook();
			void	show_startup(void);
			void	add_contact(void);
			void	search_contact(void);
			void	show_search_header(void);
};

#endif