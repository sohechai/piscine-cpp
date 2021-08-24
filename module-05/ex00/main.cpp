/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 19:10:38 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int			main(void)
{
	Bureaucrat	*bob = new Bureaucrat("bob", 150);

	try
	{
		if (bob->getgrade() < 1)
		{
			throw Bureaucrat::GradeTooHighException();
			delete bob;
		}
		else if (bob->getgrade() > 150)
		{
			throw Bureaucrat::GradeTooLowException();
			delete bob;
		}
		else
			std::cout << *bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	bob->decrease();
	std::cout << *bob;

	bob->increase();
	std::cout << *bob;

	delete bob;
}