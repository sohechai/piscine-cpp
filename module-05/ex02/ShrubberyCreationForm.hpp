/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:41 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 22:39:54 by sohechai         ###   ########lyon.fr   */
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

	ShrubberyCreationForm(std::string &target);
	~ShrubberyCreationForm();

	virtual void				action(std::string &target);

private:
	/* data */
};


std::ostream&					operator << (std::ostream &o, Form const &i);

#endif