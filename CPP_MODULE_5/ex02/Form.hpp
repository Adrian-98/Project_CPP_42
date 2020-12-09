/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:09:38 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 18:10:36 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form
{
		private:
				Form();
				std::string const &name;
				bool _signed;
				int const signGrade;
				int const executeGrade;
				
		public:
				Form(std::string const &name, int const signGrade, int const executeGrade);
				virtual ~Form();
				
				Form(Form const &other);
				class GradeTooHighException: public std::exception {
				virtual const char* what() const throw();
				};
				class GradeTooLowException: public std::exception {
					virtual const char* what() const throw();
				};
				class FormAlreadySignedException: public std::exception {
					virtual const char* what() const throw();
				};
				class UnsignedFormException: public std::exception {
				virtual const char* what() const throw();
				};
				
				Form &operator=(Form const &other);

				std::string const &getName(void) const;
				bool isSigned(void) const;
				int getSignGrade(void) const;
				int getExecuteGrade(void) const;

				void beSigned(Bureaucrat const &bureaucrat);
				virtual void execute(Bureaucrat const &bureaucrat) const = 0;
	
};

std::ostream &operator<<(std::ostream &out, Form const &form);


#endif