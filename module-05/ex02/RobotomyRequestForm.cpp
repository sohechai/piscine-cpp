/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:34 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:36:34 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm& 		RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	return (*this);
}

void				RobotomyRequestForm::action(const std::string &target) const
{
	std::cout << "Make noises of drills" << std::endl;

	std::srand(time(NULL));
	if (int random = std::rand() % 2 == 0)
		std::cout << target << " has been robotomized." << std::endl;
	else
		std::cout << target << " failed to be robotomized." << std::endl;

	return ;
}