/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:40:00 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:28 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
		private:
				Bureaucrat();
				std::string name;
				int 		grade;

		public:
				Bureaucrat(std::string const &name, int grade);
				virtual ~Bureaucrat();
				
				Bureaucrat(Bureaucrat const &other);
				Bureaucrat &operator=(Bureaucrat const &other);

				std::string const &getName(void) const;
				int getGrade(void) const;

				void incrementGrade(void);
				void decrementGrade(void);
				void signForm(Form &form) const;

				class GradeTooHighException: public std::exception {
				virtual const char* what() const throw();
				};
				class GradeTooLowException: public std::exception {
				virtual const char* what() const throw();
				};
				void executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);



#endif