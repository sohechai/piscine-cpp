/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:36 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 22:25:50 by sohechai         ###   ########lyon.fr   */
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

	RobotomyRequestForm(std::string &target);
	~RobotomyRequestForm();

	virtual void				action(std::string &target);

private:
	/* data */
};


std::ostream&					operator << (std::ostream &o, Form const &i);

#endif