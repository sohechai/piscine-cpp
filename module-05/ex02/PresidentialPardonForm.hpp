/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:32 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 22:25:50 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <unistd.h>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(std::string &target);
	~PresidentialPardonForm();

	virtual void				action(std::string &target);

private:
	/* data */
};


std::ostream&					operator << (std::ostream &o, Form const &i);

#endif