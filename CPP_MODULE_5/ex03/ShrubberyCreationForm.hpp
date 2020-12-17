/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:53:31 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 18:14:52 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
# include <string>
# include <fstream>

class ShrubberyCreationForm : virtual public Form
{
        private: 
                ShrubberyCreationForm();
                std::string const target;
	            static std::string const trees[3]; 
        public:
               	ShrubberyCreationForm(std::string const &target);
                ShrubberyCreationForm(ShrubberyCreationForm const &other);
                virtual ~ShrubberyCreationForm();

                static std::string const &name;

                class TargetFileOpenException: public std::exception {
                    virtual const char* what() const throw();
                };
                class WriteException: public std::exception {
                    virtual const char* what() const throw();
                };

                ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

                void execute(Bureaucrat const &executor) const;
};





#endif