/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:34 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 22:34:18 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target) : Form("RobotomyRequestForm", 72, 45)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void				RobotomyRequestForm::action(std::string &target)
{
	std::cout << "Make noises of drills" << std::endl;

	std::srand(time(NULL));
	if (int random = std::rand() % 2 < 1)
		std::cout << &target << " has been robotomized." << std::endl;
	else
		std::cout << &target << " failed to be robotomized." << std::endl;

	return ;
}