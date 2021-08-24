/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/24 21:31:19 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main(void)
{
	Bureaucrat	*bob = new Bureaucrat("Bob", 30);
	Form		*form = new Form("Work contract", 20, 20);

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

	try
	{
		if (form->getgradeToSign() < 1 || form->getgradeToExecute() < 1)
		{
			throw Form::GradeTooHighException();
			delete form;
		}
		else if (form->getgradeToSign() > 150 || form->getgradeToExecute() > 150)
		{
			throw Form::GradeTooLowException();
			delete form;
		}
		else
		{
			std::cout << *form;
			bob->signForm(form);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	delete bob;
	delete form;
}