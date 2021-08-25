/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:30 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/25 19:17:57 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm& 		PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	return (*this);
}

void							PresidentialPardonForm::action(const std::string &target) const
{
	std::cout << &target << " has been forgiven by Zafod Beeblerox." << std::endl;

	return ;
}