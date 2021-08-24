/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:39 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 22:50:29 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form("ShrubberyCreationForm", 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

void				ShrubberyCreationForm::action(std::string &target)
{
	std::cout << "Creating " << &target << "_shrubbery..." << std::endl;
	std::ofstream	ofs(target + "_shrubbery");
	ofs << "arbres";
	ofs.close();

	return ;
}