/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PresidentialPardonForm.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:54:12 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 19:01:43 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
        private:
	            PresidentialPardonForm();
                std::string const target;
        public:
                PresidentialPardonForm(std::string const &target);
                PresidentialPardonForm(PresidentialPardonForm const &other);
                virtual ~PresidentialPardonForm();

                static std::string const &name;

                PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

                void execute(Bureaucrat const &executor) const;
};

#endif