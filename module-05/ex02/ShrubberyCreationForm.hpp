/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:41 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:28:39 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <unistd.h>
#include <fstream>
#include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &src);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm& 		operator=(ShrubberyCreationForm const &);

	virtual void				action(const std::string &target) const;

private:
	/* data */
};


std::ostream&					operator << (std::ostream &o, Form const &i);

#endif