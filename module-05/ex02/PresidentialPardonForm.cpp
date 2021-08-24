/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 22:28:04 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target) : Form("PresidentialPardonForm", 25, 5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

void				PresidentialPardonForm::action(std::string &target)
{
	std::cout << &target << " has been forgiven by Zafod Beeblerox." << std::endl;

	return ;
}