/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:28:17 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <unistd.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm& 		operator=(RobotomyRequestForm const &);

	virtual void				action(const std::string &target) const;

private:
	/* data */
};


std::ostream&					operator << (std::ostream &o, Form const &i);

#endif