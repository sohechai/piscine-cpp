/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 14:44:53 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int			main(void)
{
	Bureaucrat *boss;
	Bureaucrat *bob;
	Bureaucrat *sylvie;
	PresidentialPardonForm *PPF = new PresidentialPardonForm("sofia");
	RobotomyRequestForm *RRF = new RobotomyRequestForm("john");
	ShrubberyCreationForm *SCF = new ShrubberyCreationForm("mike");

	try
	{
		boss = new Bureaucrat("Boss", 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';

		return (0);
	}

	std::cout << *boss;

	try
	{
		bob = new Bureaucrat("Bob", 30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete boss;

		return (0);
	}

	std::cout << *bob;

	try
	{
		sylvie = new Bureaucrat("Sylvie", 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete bob;
		delete boss;

		return (0);
	}
	std::cout << *sylvie;

	std::cout << "-------------------------" << std::endl;
	// sign ok, execute ko
	boss->signForm(PPF);
	bob->executeForm(*PPF);
	std::cout << "-------------------------" << std::endl;
	// sign ok, execute ok,
	boss->signForm(RRF);
	sylvie->executeForm(*RRF);
	std::cout << "-------------------------" << std::endl;
	// sign ok execute ok sign ko
	boss->signForm(SCF);
	sylvie->executeForm(*SCF);
	boss->signForm(SCF);
	// std::cout << "-------------------------" << std::endl;
	// // execute ko
	// sylvie->executeForm(*SCF);

	delete bob;
	delete boss;
	delete sylvie;
	delete PPF;
	delete RRF;
	delete SCF;
}