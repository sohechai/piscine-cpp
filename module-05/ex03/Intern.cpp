/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:13:15 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 15:36:55 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern &src)
{
	(void)src;
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern& 		Intern::operator=(Intern const &)
{

	return (*this);
}

Form			*Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] = {"Presidential request", "Robotomy request", "Shrubbery request"};
	Form		*ptr[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};

	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (tab[i] == name)
			{
				std::cout << "Intern creates " << name << std::endl;
				for (int idx = 0; idx < 3; idx++)
				{
					if (idx != i)
						delete ptr[idx];
				}
				return (ptr[i]);
			}
		}
		throw InternFormNotFoundException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < 3; i++)
		delete ptr[i];
	return (NULL);
}
