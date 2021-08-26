/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:40:32 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:40:41 by sohechai         ###   ########lyon.fr   */
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

	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm& 		operator=(PresidentialPardonForm const &);

	virtual void				action(const std::string &target) const;

private:
	/* data */
};


std::ostream&					operator << (std::ostream &o, Form const &i);

#endif