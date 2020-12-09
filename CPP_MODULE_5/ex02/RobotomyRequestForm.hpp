/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:53:57 by amunoz-p          #+#    #+#             */
/*   Updated: 2020/12/09 18:25:50 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
        private:
                RobotomyRequestForm();
                std::string const target;
        public:
                RobotomyRequestForm(std::string const &target);
                RobotomyRequestForm(RobotomyRequestForm const &other);
                virtual ~RobotomyRequestForm();

                static std::string const &name;

                RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

                void execute(Bureaucrat const &executor) const; 
};


#endif