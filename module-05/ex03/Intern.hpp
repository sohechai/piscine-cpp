/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:10:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/25 21:19:07 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <unistd.h>
# include <string.h>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:

	Intern();
	Intern(Intern &src);
	~Intern();

	Intern& 		operator=(Intern const &);

	Form			*makeForm(std::string name, std::string target);

	class 						InternFormNotFoundException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form not found");
			}
	};

private:

};

#endif