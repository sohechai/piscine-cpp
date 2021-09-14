/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 14:32:30 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main(void)
{
	Bureaucrat	*bob;
	Form		*form;

	try
	{
		bob = new Bureaucrat("Bob", 30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	
	std::cout << *bob;

	try
	{
		form = new Form("Work contract", 10, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete bob;
		return (0);
	}

	std::cout << *form;
	bob->signForm(form);

	delete bob;
	delete form;
}