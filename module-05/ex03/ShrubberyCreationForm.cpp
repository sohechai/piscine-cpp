/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:39 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:40:41 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm& 		ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	return (*this);
}

void				ShrubberyCreationForm::action(const std::string &target) const
{
	std::cout << "Creating " << target << "_shrubbery..." << std::endl;
	std::ofstream	ofs(target + "_shrubbery");
	ofs << "..O..O..O..O..O..O..O\n..|..|..|..|..|..|..|"; 
	ofs.close();

	return ;
}