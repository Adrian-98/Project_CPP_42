/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:19:53 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 19:26:19 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <unordered_set>
# include <string>
# include <cassert>

class Intern
{
    private:
    
    public:
            Intern();
            virtual ~Intern();
            Intern(Intern const &other);
            Intern &operator=(Intern const &other);
            
            class FormDoesntExists: public std::exception{
		    virtual const char* what() const throw();
	        };
            Form *makeForm(std::string const & form_name, std::string const & target);
            
};



#endif